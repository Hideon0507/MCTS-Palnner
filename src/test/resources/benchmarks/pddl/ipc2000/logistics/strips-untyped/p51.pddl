(define (problem logistics-25-0)
(:domain logistics)
(:objects
    APN3
    APT9
    POS9
    CIT9
    TRU9
    OBJ93
    OBJ92
    OBJ91
    APT8
    POS8
    CIT8
    TRU8
    OBJ83
    OBJ82
    OBJ81
    APT7
    POS7
    CIT7
    TRU7
    OBJ73
    OBJ72
    OBJ71
    APT6
    POS6
    CIT6
    TRU6
    OBJ63
    OBJ62
    OBJ61
    APN2
    APT5
    POS5
    CIT5
    TRU5
    OBJ53
    OBJ52
    OBJ51
    APT4
    POS4
    CIT4
    TRU4
    OBJ43
    OBJ42
    OBJ41
    APT3
    POS3
    CIT3
    TRU3
    OBJ33
    OBJ32
    OBJ31
    APT2
    POS2
    CIT2
    TRU2
    OBJ23
    OBJ22
    OBJ21
    APN1
    APT1
    POS1
    CIT1
    TRU1
    OBJ13
    OBJ12
    OBJ11
)
(:init
    (PACKAGE OBJ11)
    (PACKAGE OBJ12)
    (PACKAGE OBJ13)
    (PACKAGE OBJ21)
    (PACKAGE OBJ22)
    (PACKAGE OBJ23)
    (PACKAGE OBJ31)
    (PACKAGE OBJ32)
    (PACKAGE OBJ33)
    (PACKAGE OBJ41)
    (PACKAGE OBJ42)
    (PACKAGE OBJ43)
    (PACKAGE OBJ51)
    (PACKAGE OBJ52)
    (PACKAGE OBJ53)
    (PACKAGE OBJ61)
    (PACKAGE OBJ62)
    (PACKAGE OBJ63)
    (PACKAGE OBJ71)
    (PACKAGE OBJ72)
    (PACKAGE OBJ73)
    (PACKAGE OBJ81)
    (PACKAGE OBJ82)
    (PACKAGE OBJ83)
    (PACKAGE OBJ91)
    (PACKAGE OBJ92)
    (PACKAGE OBJ93)
    (TRUCK TRU1)
    (TRUCK TRU2)
    (TRUCK TRU3)
    (TRUCK TRU4)
    (TRUCK TRU5)
    (TRUCK TRU6)
    (TRUCK TRU7)
    (TRUCK TRU8)
    (TRUCK TRU9)
    (CITY CIT1)
    (CITY CIT2)
    (CITY CIT3)
    (CITY CIT4)
    (CITY CIT5)
    (CITY CIT6)
    (CITY CIT7)
    (CITY CIT8)
    (CITY CIT9)
    (LOCATION POS1)
    (LOCATION APT1)
    (LOCATION POS2)
    (LOCATION APT2)
    (LOCATION POS3)
    (LOCATION APT3)
    (LOCATION POS4)
    (LOCATION APT4)
    (LOCATION POS5)
    (LOCATION APT5)
    (LOCATION POS6)
    (LOCATION APT6)
    (LOCATION POS7)
    (LOCATION APT7)
    (LOCATION POS8)
    (LOCATION APT8)
    (LOCATION POS9)
    (LOCATION APT9)
    (AIRPORT APT1)
    (AIRPORT APT2)
    (AIRPORT APT3)
    (AIRPORT APT4)
    (AIRPORT APT5)
    (AIRPORT APT6)
    (AIRPORT APT7)
    (AIRPORT APT8)
    (AIRPORT APT9)
    (AIRPLANE APN1)
    (AIRPLANE APN2)
    (AIRPLANE APN3)
    (AT APN1 APT6)
    (AT APN2 APT1)
    (AT APN3 APT6)
    (AT TRU1 POS1)
    (AT OBJ11 POS1)
    (AT OBJ12 POS1)
    (AT OBJ13 POS1)
    (AT TRU2 POS2)
    (AT OBJ21 POS2)
    (AT OBJ22 POS2)
    (AT OBJ23 POS2)
    (AT TRU3 POS3)
    (AT OBJ31 POS3)
    (AT OBJ32 POS3)
    (AT OBJ33 POS3)
    (AT TRU4 POS4)
    (AT OBJ41 POS4)
    (AT OBJ42 POS4)
    (AT OBJ43 POS4)
    (AT TRU5 POS5)
    (AT OBJ51 POS5)
    (AT OBJ52 POS5)
    (AT OBJ53 POS5)
    (AT TRU6 POS6)
    (AT OBJ61 POS6)
    (AT OBJ62 POS6)
    (AT OBJ63 POS6)
    (AT TRU7 POS7)
    (AT OBJ71 POS7)
    (AT OBJ72 POS7)
    (AT OBJ73 POS7)
    (AT TRU8 POS8)
    (AT OBJ81 POS8)
    (AT OBJ82 POS8)
    (AT OBJ83 POS8)
    (AT TRU9 POS9)
    (AT OBJ91 POS9)
    (AT OBJ92 POS9)
    (AT OBJ93 POS9)
    (IN-CITY POS1 CIT1)
    (IN-CITY APT1 CIT1)
    (IN-CITY POS2 CIT2)
    (IN-CITY APT2 CIT2)
    (IN-CITY POS3 CIT3)
    (IN-CITY APT3 CIT3)
    (IN-CITY POS4 CIT4)
    (IN-CITY APT4 CIT4)
    (IN-CITY POS5 CIT5)
    (IN-CITY APT5 CIT5)
    (IN-CITY POS6 CIT6)
    (IN-CITY APT6 CIT6)
    (IN-CITY POS7 CIT7)
    (IN-CITY APT7 CIT7)
    (IN-CITY POS8 CIT8)
    (IN-CITY APT8 CIT8)
    (IN-CITY POS9 CIT9)
    (IN-CITY APT9 CIT9)
)
(:goal (and
    (AT OBJ12 POS7)
    (AT OBJ51 APT7)
    (AT OBJ81 APT8)
    (AT OBJ61 POS3)
    (AT OBJ22 POS6)
    (AT OBJ41 POS8)
    (AT OBJ62 APT3)
    (AT OBJ63 POS4)
    (AT OBJ32 APT2)
    (AT OBJ52 POS3)
    (AT OBJ91 APT7)
    (AT OBJ21 POS5)
    (AT OBJ11 APT4)
    (AT OBJ92 APT8)
    (AT OBJ71 APT6)
    (AT OBJ72 APT6)
    (AT OBJ13 APT9)
    (AT OBJ82 POS3)
    (AT OBJ83 POS3)
    (AT OBJ43 APT4)
    (AT OBJ23 POS9)
    (AT OBJ53 POS4)
    (AT OBJ33 POS8)
    (AT OBJ73 POS8)
    (AT OBJ31 POS3)
)
)
)