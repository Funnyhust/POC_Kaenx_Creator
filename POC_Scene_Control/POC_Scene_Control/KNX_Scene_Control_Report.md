# KNX Scene Control — Báo Cáo Kỹ Thuật

**Nguồn**: KNX Standard Vol.7 Application Descriptions (07_20_01, 07_20_02), Vol.6 Runtime Profiles, AN171  
**Ngày**: 2026-03-26  
**Tác giả**: R&D Lumi

---

## 1. Tổng quan

KNX Scene Control là cơ chế cho phép **gọi lại (recall)** và **lưu trữ (store)** trạng thái đã cấu hình trước cho một hoặc nhiều thiết bị actuator thông qua **một lệnh duy nhất** (scene number). Hệ thống hỗ trợ tối đa **64 scene** (số thứ tự 0–63).

```
[Scene Button]  ──DPT 18.001──▶  [KNX Bus]  ──▶  [Relay / Dimmer / Shutter]
                                                         │
                                                   Recall: Apply state
                                                   Store:  Save state → Flash
```

---

## 2. Datapoint Types (DPT)

### 2.1 DPT 17.001 — `DPT_SceneNumber`

- **Kích thước**: 1 byte
- **Chức năng**: Chỉ **Recall** (gọi scene), không hỗ trợ Store
- **Cấu trúc**:

```
Bit:  7    6    5    4    3    2    1    0
      r1   r0   ├──────── U6 (0..63) ────┤
      (reserved=0)  Scene Number
```

### 2.2 DPT 18.001 — `DPT_SceneControl`

- **Kích thước**: 1 byte  
- **Chức năng**: **Recall** (c=0) hoặc **Store/Learn** (c=1)
- **Cấu trúc**:

```
Bit:  7    6    5    4    3    2    1    0
      c    r0   ├──────── U6 (0..63) ────┤
      │    └── Reserved = 0 (không dùng, luôn phải = 0 phía sender)
      └─────── 0 = Activate (Recall)
               1 = Learn (Store)
```

> **Lưu ý về bit reserved (bit 6):**  
> Sender phải gửi = 0. Receiver nên mask khi xử lý để tránh lỗi tương thích.  
> Bit 6 dù là 0 hay 1, nếu receiver mask đúng (`raw & 0x3F`) thì kết quả không đổi.

---

## 3. Functional Blocks (FBs)

| FB | Object Type | Vai trò | Mô tả |
|---|---|---|---|
| **FB Scene Sensor** | 403 | Sender (button) | Gửi DPT 18.001 khi nhấn nút |
| **FB Scene Controller** | 1010 | Controller | Quản lý nhiều scene cho nhiều actuator |
| **FB_Switch_Scene_Numbered** | — | E-Mode channel | Push button với 2 scene number (P1, P2) |
| **FB Light Switching Actuator Basic (LSAB)** | — | Receiver (relay) | Nhận SN/SC, áp dụng hoặc lưu trạng thái On/Off |
| **FB Dimming Actuator Basic (DAB)** | — | Receiver (dimmer) | Nhận SN/SC, áp dụng hoặc lưu brightness |
| **FB Shutter Actuator** | — | Receiver (rèm) | Nhận SN/SC, recall/store vị trí rèm |

---

## 4. Phía thiết bị gửi scene (Scene Sender)

### 4.1 Nguyên tắc thiết kế

**Store phải khó kích hoạt hơn Recall** — để tránh lưu nhầm.

| Hành động | Trigger vật lý | DPT 18.001 gửi | Ghi chú |
|---|---|---|---|
| **Recall** (gọi scene) | Nhấn đơn (short press) | `c=0, scene=N` | Thao tác thường ngày |
| **Store** (lưu scene) | Nhấn giữ ≥ 5 giây | `c=1, scene=N` | Ít xảy ra, cần có chủ đích |

### 4.2 UI phản hồi khi Store

```
Giữ nút:
  0s ──────▶ 5s
  [LED nháy chậm] ──▶ [LED sáng liên tục] ──▶ gửi Store telegram
```

### 4.3 Parse telegram nhận được (phía firmware)

```c
void handle_scene_control(uint8_t raw) {
    uint8_t learn   = (raw >> 7) & 0x01;  // bit 7: 0=Recall, 1=Store
    // bit 6: reserved, bỏ qua
    uint8_t scene_n =  raw       & 0x3F;  // bit 5..0: scene number (0-63)

    if (scene_n >= NUM_SCENES_SUPPORTED) return; // ignore out-of-range

    if (learn) {
        scene_store(scene_n);
    } else {
        scene_recall(scene_n);
    }
}
```

---

## 5. Phía Actuator (Relay / Dimmer / Shutter)

### 5.1 Logic xử lý khi nhận scene

```
Nhận telegram SC (DPT 18.001)
│
├─ [c = 0] → RECALL
│   └─ Đọc scene_table[N] từ RAM
│       ├─ is_valid == false → BỎ QUA (scene chưa được cấu hình)
│       └─ is_valid == true  → Áp dụng output_state ngay lập tức
│
└─ [c = 1] → STORE
    ├─ Kiểm tra SLME (global lock)
    │   └─ SLME = false → BỎ QUA HOÀN TOÀN (không recall, không làm gì)
    ├─ Kiểm tra SFSN[N] (per-scene lock)
    │   └─ SFSN[N] = false → BỎ QUA HOÀN TOÀN (không recall, không làm gì)
    ├─ Đọc current output state
    ├─ Ghi vào RAM: scene_table[N].output_state = current
    └─ Ghi vào Flash async (NVS, debounce ~1s)
```

> **Quan trọng**: Khi `c=1` (Store), nếu actuator không hỗ trợ store (SLME=false hoặc SFSN[N]=false),
> actuator phải **bỏ qua hoàn toàn** — **không thực hiện recall**, không thay đổi output.
> Store và Recall là hai lệnh độc lập, không có fallback.

### 5.2 Hành động theo loại thiết bị

| Thiết bị | Recall làm gì | Store lưu gì |
|---|---|---|
| **Relay** | Set relay ON hoặc OFF | Trạng thái relay hiện tại (0/1) |
| **Dimmer** | Set brightness theo % | Brightness hiện tại (0–100%) |
| **Shutter/Rèm** | Di chuyển đến vị trí % | Vị trí hiện tại (0–100%) |
| **Đèn CCT** | Set brightness + colour temp | Brightness + colour temp hiện tại |

---

## 6. Cấu trúc bộ nhớ Scene

### 6.1 Kiểu dữ liệu

```c
/* Một entry trong bảng scene */
typedef struct {
    uint8_t is_valid;       // 0 = chưa có giá trị, 1 = đã được cấu hình
    uint8_t output_state;   // Relay: 0/1 | Dimmer/Shutter: 0-100 (%)
    /* Mở rộng cho CCT/RGBW về sau:
     * uint16_t colour_temp;
     * uint8_t  r, g, b, w;
     */
} scene_entry_t;

/* Toàn bộ cấu hình scene của một kênh */
typedef struct {
    uint8_t       num_scenes;       // Số scene hỗ trợ (1–64)
    uint8_t       slme;             // Scene Learning Mode Enable (global)
    uint8_t       sfsn[64];         // Per-scene: storage enabled (0/1)
    scene_entry_t scene_table[64];  // Trạng thái lưu cho từng scene
} scene_config_t;
```

### 6.2 Sơ đồ bộ nhớ

```
Flash (NVS — persistent)            RAM (runtime)
┌────────────────────────┐          ┌────────────────────────┐
│ slme          (1B)     │  boot    │ slme                   │
│ sfsn[0..63]   (64B)    │ ──────▶  │ sfsn[0..63]            │
│ scene_table[0]         │          │ scene_table[0]         │
│   .is_valid            │          │   .is_valid            │
│   .output_state        │          │   .output_state        │
│ scene_table[1]         │          │ ...                    │
│   ...                  │          │ scene_table[63]        │
│ scene_table[63]        │          └──────────┬─────────────┘
└────────────────────────┘                     │
         ▲                                     │ Recall → đọc RAM (nhanh)
         │                                     ▼
         └────── Store → ghi Flash async ◀── current output state
                         (NVS write, debounce 1s)
```

### 6.3 Nguyên tắc đọc/ghi

| Thao tác | Đọc/Ghi | Thực hiện |
|---|---|---|
| **Boot** | Đọc Flash → RAM | Load toàn bộ scene table 1 lần |
| **Recall** | Đọc RAM | Ngay lập tức, không delay |
| **Store** | Ghi RAM ngay | Cập nhật RAM trước |
| **Store** | Ghi Flash async | Debounce ~1s, tránh wear Flash |
| **ETS Download** | Ghi Flash → RAM | ETS ghi cấu hình ban đầu (SSN) |

---

## 7. Parameters điều khiển hoạt động scene

| Parameter | Ký hiệu | DPT | Mô tả |
|---|---|---|---|
| State for Scene Number | **SSN** | Array[64] × `1.001 DPT_Switch` | Giá trị On/Off mỗi scene (relay) |
| Brightness for Scene | **BSN** | Array[64] × `5.001 DPT_Scaling` | Brightness mỗi scene (dimmer) |
| Storage Function for Scene | **SFSN** | Array[64] × `1.003 DPT_Enable` | Bật/tắt learn cho từng scene |
| Scene Learning Mode Enable | **SLME** | `1.003 DPT_Enable` | Bật/tắt toàn cục chế độ learn |

---

## 8. E-Mode Channels liên quan Scene

| Channel Code | Tên | Ứng dụng |
|---|---|---|
| `0007h` | `CH_PB_Scene_Numbered` | Push button, chỉ recall |
| `0008h` | `CH_PB_Scene` | Push button, recall + learn |
| `000Fh` | `CH_Switch_Scene_Numbered` | Switch, chỉ recall |
| `0010h` | `CH_Switch_Scene` | Switch, recall + learn |
| `0103h` | `CH_Light_Actuator_Scene` | Light actuator nhận scene |
| `0203h` | `CH_Scene_Converter` | Chuyển đổi giữa các scene format |

---

## 9. Quy tắc bắt buộc

1. Scene number nằm ngoài range hỗ trợ → **bỏ qua**, không gây lỗi
2. `SLME = false` → **toàn bộ Store bị từ chối**, cho dù SFSN[N] = true
3. `SFSN[N] = false` → Store cho scene N bị từ chối, các scene khác không ảnh hưởng
4. Scene Control (**SC**) và Scene Number (**SN**) **cùng tham chiếu một bảng scene** — scene N qua SN và SC là một
5. Trạng thái scene **phải tồn tại qua power cycle** (lưu non-volatile)
6. Sender phải gửi bit 6 (reserved) = `0`

---

## 10. Kế hoạch triển khai cho sản phẩm Lumi

### MVP (tối thiểu)

- [ ] Implement input `SN` (DPT 17.001) + `SC` (DPT 18.001) trên actuator
- [ ] scene_table lưu NVS, load vào RAM khi boot
- [ ] Recall: apply từ RAM (không blocking)
- [ ] Store: cập nhật RAM → ghi NVS async
- [ ] Bỏ qua scene number ngoài range
- [ ] SLME = true mặc định

### Nâng cao

- [ ] SFSN per-scene configurable từ ETS
- [ ] SLME lockable từ ETS
- [ ] Long-press ≥ 5s để trigger Store (phía button)
- [ ] LED feedback khi Store thành công
- [ ] Hỗ trợ mở rộng: BSN (dimmer brightness), CTSN (colour temp)
