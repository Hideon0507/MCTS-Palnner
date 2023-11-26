(define (problem schedule-26-1)
(:domain schedule)
(:objects
    C1
    B1
    A1
    Z0
    W0
    V0
    U0
    S0
    R0
    P0
    Q0
    O0
    N0
    M0
    L0
    K0
    J0
    I0
    H0
    G0
    F0
    E0
    D0
    C0
    CIRCULAR
    TWO
    THREE
    BLUE
    YELLOW
    BACK
    RED
    B0
    FRONT
    ONE
    BLACK
    OBLONG
    A0
)
(:init
    (SHAPE A0 CYLINDRICAL)
    (SURFACE-CONDITION A0 ROUGH)
    (PAINTED A0 BLUE)
    (HAS-HOLE A0 THREE BACK)
    (TEMPERATURE A0 COLD)
    (SHAPE B0 CYLINDRICAL)
    (SURFACE-CONDITION B0 POLISHED)
    (PAINTED B0 BLUE)
    (HAS-HOLE B0 ONE BACK)
    (TEMPERATURE B0 COLD)
    (SHAPE C0 OBLONG)
    (SURFACE-CONDITION C0 POLISHED)
    (PAINTED C0 RED)
    (HAS-HOLE C0 TWO BACK)
    (TEMPERATURE C0 COLD)
    (SHAPE D0 OBLONG)
    (SURFACE-CONDITION D0 POLISHED)
    (PAINTED D0 BLACK)
    (HAS-HOLE D0 ONE BACK)
    (TEMPERATURE D0 COLD)
    (SHAPE E0 CYLINDRICAL)
    (SURFACE-CONDITION E0 SMOOTH)
    (PAINTED E0 RED)
    (HAS-HOLE E0 TWO BACK)
    (TEMPERATURE E0 COLD)
    (SHAPE F0 CIRCULAR)
    (SURFACE-CONDITION F0 POLISHED)
    (PAINTED F0 RED)
    (HAS-HOLE F0 THREE BACK)
    (TEMPERATURE F0 COLD)
    (SHAPE G0 OBLONG)
    (SURFACE-CONDITION G0 POLISHED)
    (PAINTED G0 YELLOW)
    (HAS-HOLE G0 TWO BACK)
    (TEMPERATURE G0 COLD)
    (SHAPE H0 CYLINDRICAL)
    (SURFACE-CONDITION H0 POLISHED)
    (PAINTED H0 BLUE)
    (HAS-HOLE H0 ONE BACK)
    (TEMPERATURE H0 COLD)
    (SHAPE I0 CYLINDRICAL)
    (SURFACE-CONDITION I0 ROUGH)
    (PAINTED I0 YELLOW)
    (HAS-HOLE I0 THREE BACK)
    (TEMPERATURE I0 COLD)
    (SHAPE J0 CYLINDRICAL)
    (SURFACE-CONDITION J0 POLISHED)
    (PAINTED J0 BLUE)
    (HAS-HOLE J0 ONE BACK)
    (TEMPERATURE J0 COLD)
    (SHAPE K0 OBLONG)
    (SURFACE-CONDITION K0 SMOOTH)
    (PAINTED K0 YELLOW)
    (HAS-HOLE K0 THREE FRONT)
    (TEMPERATURE K0 COLD)
    (SHAPE L0 CIRCULAR)
    (SURFACE-CONDITION L0 POLISHED)
    (PAINTED L0 BLACK)
    (HAS-HOLE L0 TWO BACK)
    (TEMPERATURE L0 COLD)
    (SHAPE M0 OBLONG)
    (SURFACE-CONDITION M0 SMOOTH)
    (PAINTED M0 RED)
    (HAS-HOLE M0 THREE FRONT)
    (TEMPERATURE M0 COLD)
    (SHAPE N0 CIRCULAR)
    (SURFACE-CONDITION N0 POLISHED)
    (PAINTED N0 BLUE)
    (HAS-HOLE N0 TWO BACK)
    (TEMPERATURE N0 COLD)
    (SHAPE O0 OBLONG)
    (SURFACE-CONDITION O0 ROUGH)
    (PAINTED O0 BLUE)
    (HAS-HOLE O0 ONE FRONT)
    (TEMPERATURE O0 COLD)
    (SHAPE Q0 OBLONG)
    (SURFACE-CONDITION Q0 POLISHED)
    (PAINTED Q0 YELLOW)
    (HAS-HOLE Q0 THREE BACK)
    (TEMPERATURE Q0 COLD)
    (SHAPE P0 OBLONG)
    (SURFACE-CONDITION P0 POLISHED)
    (PAINTED P0 BLUE)
    (HAS-HOLE P0 TWO FRONT)
    (TEMPERATURE P0 COLD)
    (SHAPE R0 CIRCULAR)
    (SURFACE-CONDITION R0 SMOOTH)
    (PAINTED R0 RED)
    (HAS-HOLE R0 ONE FRONT)
    (TEMPERATURE R0 COLD)
    (SHAPE S0 CIRCULAR)
    (SURFACE-CONDITION S0 POLISHED)
    (PAINTED S0 BLACK)
    (HAS-HOLE S0 ONE BACK)
    (TEMPERATURE S0 COLD)
    (SHAPE U0 CYLINDRICAL)
    (SURFACE-CONDITION U0 SMOOTH)
    (PAINTED U0 BLUE)
    (HAS-HOLE U0 THREE BACK)
    (TEMPERATURE U0 COLD)
    (SHAPE V0 OBLONG)
    (SURFACE-CONDITION V0 SMOOTH)
    (PAINTED V0 BLUE)
    (HAS-HOLE V0 ONE BACK)
    (TEMPERATURE V0 COLD)
    (SHAPE W0 CYLINDRICAL)
    (SURFACE-CONDITION W0 SMOOTH)
    (PAINTED W0 YELLOW)
    (HAS-HOLE W0 THREE BACK)
    (TEMPERATURE W0 COLD)
    (SHAPE Z0 CIRCULAR)
    (SURFACE-CONDITION Z0 SMOOTH)
    (PAINTED Z0 YELLOW)
    (HAS-HOLE Z0 THREE BACK)
    (TEMPERATURE Z0 COLD)
    (SHAPE A1 CIRCULAR)
    (SURFACE-CONDITION A1 POLISHED)
    (PAINTED A1 BLUE)
    (HAS-HOLE A1 ONE FRONT)
    (TEMPERATURE A1 COLD)
    (SHAPE B1 CIRCULAR)
    (SURFACE-CONDITION B1 SMOOTH)
    (PAINTED B1 BLACK)
    (HAS-HOLE B1 ONE FRONT)
    (TEMPERATURE B1 COLD)
    (SHAPE C1 CYLINDRICAL)
    (SURFACE-CONDITION C1 ROUGH)
    (PAINTED C1 RED)
    (HAS-HOLE C1 THREE FRONT)
    (TEMPERATURE C1 COLD)
    (CAN-ORIENT DRILL-PRESS BACK)
    (CAN-ORIENT PUNCH BACK)
    (CAN-ORIENT DRILL-PRESS FRONT)
    (CAN-ORIENT PUNCH FRONT)
    (HAS-PAINT IMMERSION-PAINTER YELLOW)
    (HAS-PAINT SPRAY-PAINTER YELLOW)
    (HAS-PAINT IMMERSION-PAINTER BLUE)
    (HAS-PAINT SPRAY-PAINTER BLUE)
    (HAS-PAINT IMMERSION-PAINTER BLACK)
    (HAS-PAINT SPRAY-PAINTER BLACK)
    (HAS-PAINT IMMERSION-PAINTER RED)
    (HAS-PAINT SPRAY-PAINTER RED)
    (HAS-BIT DRILL-PRESS THREE)
    (HAS-BIT PUNCH THREE)
    (HAS-BIT DRILL-PRESS TWO)
    (HAS-BIT PUNCH TWO)
    (HAS-BIT DRILL-PRESS ONE)
    (HAS-BIT PUNCH ONE)
    (PART C1)
    (PART B1)
    (PART A1)
    (PART Z0)
    (PART W0)
    (PART V0)
    (PART U0)
    (PART S0)
    (PART R0)
    (PART P0)
    (PART Q0)
    (PART O0)
    (PART N0)
    (PART M0)
    (PART L0)
    (PART K0)
    (PART J0)
    (PART I0)
    (PART H0)
    (PART G0)
    (PART F0)
    (PART E0)
    (PART D0)
    (PART C0)
    (PART B0)
    (PART A0)
)
(:goal (and
    (PAINTED Z0 RED)
    (PAINTED U0 RED)
    (PAINTED A1 BLACK)
    (SURFACE-CONDITION S0 ROUGH)
    (SURFACE-CONDITION C1 POLISHED)
    (PAINTED B1 BLUE)
    (PAINTED N0 BLACK)
    (SURFACE-CONDITION K0 POLISHED)
    (SHAPE C0 CYLINDRICAL)
    (PAINTED R0 YELLOW)
    (PAINTED S0 BLUE)
    (SHAPE Z0 CYLINDRICAL)
    (PAINTED L0 RED)
    (PAINTED C0 YELLOW)
    (SHAPE R0 CYLINDRICAL)
    (SURFACE-CONDITION L0 SMOOTH)
    (SURFACE-CONDITION J0 ROUGH)
    (SURFACE-CONDITION V0 POLISHED)
    (SHAPE V0 CYLINDRICAL)
    (SHAPE Q0 CYLINDRICAL)
    (SURFACE-CONDITION E0 ROUGH)
    (PAINTED M0 BLUE)
    (SHAPE D0 CYLINDRICAL)
    (PAINTED W0 BLUE)
    (SURFACE-CONDITION Q0 SMOOTH)
    (SURFACE-CONDITION I0 SMOOTH)
)))
