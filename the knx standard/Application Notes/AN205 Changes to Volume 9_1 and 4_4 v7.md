## KNX CERTIFICATION AND LICENCE SYSTEM
# Application Note No 205 rev 7

### Approved by KCG 032021 – approved in Final Voting by KTB 07/21 – still under discussion in KCG - Immediate effect after final voting

**Subject:** Volume 9/1 cable requirements - Volume 4/4 Usage of the second Twisted Pair - Installation
Safety Requirements

**Question:** When a TP1 cable includes two pairs, do these pairs have to be individually twisted or does it
suffice if all 4 conductors are twisted together?

**Answer:**

### In order to make sure that electromagnetic interference (EMI) from external sources are canceled, it is paramount that the two conductors of the single circuit are twisted together. 

 According to the TP1 cable requirements as given in Volume 9/1, it is allowed to provide TP1 cable that contains 4 conductors for two potential circuits (red/black respectively yellow/white). The conductors in such a cable can be twisted in the following ways, which has consequences on the possible use of the normally free two conductors (yellow/white): 

 Type A: the red/black pair are diagonally against one another (same for white/yellow) and all conductors are twisted together (referred to as “Twisted Quad”); 

 Type B: the red/black pair are twisted together, same for white/yellow, and both pairs are again twisted (referred to as “Twisted Pair”). 

 Type C: the red/black and the white/yellow are not diagonally against one another. 

 This distinction shall be added to Volume 9/1. 

 In the case where the cable is of the type A or C, the free two conductors may only be used for DC supply, not for any modulated signal (e.g. TP1 or voice communication), to avoid possible crosstalk between the different circuits. 

 In the case where the cable is of the type B, such parallel use of the free two condutors could be allowed for any modulated signal but KNX strongly advises against because of possible crosstalk. 


-----

## KNX CERTIFICATION AND LICENCE SYSTEM
### Clause 7 of Volume 4/4 shall therefore be changed in the following way (changes marked red): 

The second twisted pair provided by a KNX bus cable shall be used as follows:

**Use of 2[nd] Pair** **Requirements** **Installation Note**
1 Let free The free ends of the cable shall be Use e.g. Bus Connection Block
protected against direct contact to live
parts of all other circuits or ground.

2 2[nd] pair in parallel to the bus 1. Connect yellow/white and red/dark

pair grey respectively for correct polarity
(for reducing Voltage Drop) in case of KNX bus cable.

2. Although the voltage drop is reduced
by the parallel 2[nd] pair, the limits of
total cable length remain valid.
3 Supporting bus applications 1. The usage shall be within the
frame of SELV/PELV
(25V AC / 60 V DC )

2. Max current 2.5 A Overcurrent protection may be provided
Overcurrent protection is by the Power Supply Unit or an extra
required. limiter or circuit breaker/fuse.

3. Voice communication on the 2[nd] See Volume 9/1, for type A and C not
pair allowed, for B strongly advised against.

For these reasons, in the KNX training
documentation the use of the 2[nd] pair is
limited to DC supply only.
4. The voltage level chosen for the Example:
2[nd] pair shall be the same same voltage level for
throughout one autonomous bus                    - one building or home
installation                        - one workshop with few separate

buildings

                                         - one floor of a big building
5. No undue generation of EMI or additional/extra suppression measures
of overvoltages shall occur on may be required
the 2[nd] pair

6. Both ends of the 2[nd] pair wires
shall be marked (durable and
legible)

4 2[nd] KNX Bus line on 2[nd] pair See Volume 9/1, for type A and C not

or other TP medium allowed, for B strongly advised against.

For these reasons, in the KNX training
documentation the use of the 2[nd] pair is
limited to DC supply only.
### In any of the above cases, compliance to IEC 63044-3 shall be ensured. 

|Col1|Use of 2nd Pair|Requirements|Installation Note|
|---|---|---|---|
|1|Let free|The free ends of the cable shall be<br>protected against direct contact to live<br>parts of all other circuits orground.|Use e.g. Bus Connection Block|
|2|2nd pair in parallel to the bus<br>pair<br>(for reducing Voltage Drop)||1.<br>Connect yellow/white and red/dark<br>grey respectively for correct polarity<br>in case of KNX bus cable.|
|2|2nd pair in parallel to the bus<br>pair<br>(for reducing Voltage Drop)||2.<br>Although the voltage drop is reduced<br>by the parallel 2nd pair, the limits of<br>total cable length remain valid.|
|3|Supporting bus applications|1.<br>The usage shall be within the<br>frame of SELV/PELV<br>(25V AC / 60 V DC)||
|3|Supporting bus applications|2.<br>Max current 2.5 A<br>Overcurrent protection is<br>required.|Overcurrent protection may be provided<br>by the Power Supply Unit or an extra<br>limiter or circuit breaker/fuse.|
|3|Supporting bus applications|3.<br>Voice communication  on the 2nd <br>pair|See Volume 9/1, for type A and C not<br>allowed, for B strongly advised against.<br>For these reasons, in the KNX training<br>documentation the use of the 2nd pair is<br>limited to DC supply only.|
|3|Supporting bus applications|4.<br>The voltage level chosen for the<br>2nd pair shall be the same<br>throughout one autonomous bus<br>installation|Example:<br>same voltage level for<br>- one building or home<br>- one workshop with few separate<br>buildings<br>- one floor of a big building|
|3|Supporting bus applications|5.<br>No undue generation of EMI or<br>of overvoltages shall occur on<br>the 2nd pair|additional/extra suppression measures<br>may be required|
|3|Supporting bus applications|6.<br>Both ends of the 2nd pair wires<br>shall be marked (durable and<br>legible)||
|4|2nd KNX Bus line on 2nd pair<br>~~or other TP medium~~||See Volume 9/1, for type A and C not<br>allowed, for B strongly advised against.<br>For these reasons, in the KNX training<br>documentation the use of the 2nd pair is<br>limited to DC supply only.|


-----

