"""Stable numeric Vietnamese display-label dictionary (V1 sample)."""

VIETNAMESE_LABELS = (
    (0, "Không hiển thị"),
    (1, "Phòng khách"),
    (2, "Phòng ngủ"),
    (3, "Phòng bếp"),
    (4, "Phòng ăn"),
    (5, "Hành lang"),
    (6, "Ban công"),
    (7, "Sân vườn"),
    (8, "Đèn chính"),
    (9, "Đèn trần"),
    (10, "Đèn hắt"),
    (11, "Đèn ngủ"),
    (12, "Rèm cửa"),
    (13, "Điều hòa"),
    (14, "Quạt"),
    (15, "Bình nóng lạnh"),
    (16, "Tất cả đèn"),
    (17, "Cảnh tiếp khách"),
    (18, "Cảnh thư giãn"),
    (19, "Cảnh đi ngủ"),
    (20, "Cảnh ra ngoài"),
)

assert all(len(label) <= 20 for _, label in VIETNAMESE_LABELS)
