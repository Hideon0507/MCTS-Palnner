(define (problem psr-s74-n5-l4-f50)
  (:domain psr)
  (:objects cb1 cb2 cb3 cb4 cb5
            sd1 sd2 sd3 sd4 sd5 sd6 sd7 sd8 sd9 sd10 sd11 sd12 sd13 sd14 sd15 sd16 sd17 sd18 sd19 sd20 sd21 sd22 sd23 sd24 - DEVICE
            l1 l2 l3 l4 l5 l6 l7 l8 l9 l10 l11 l12 l13 l14 l15 l16 l17 l18 l19 l20 l21 l22 l23 l24 - LINE
  )
  (:init
    (breaker cb1)
    (breaker cb2)
    (breaker cb3)
    (breaker cb4)
    (breaker cb5)
    (closed cb1)
    (closed cb2)
    (closed cb3)
    (closed cb4)
    (closed cb5)
    (closed sd1)
    (closed sd2)
    (closed sd4)
    (closed sd5)
    (closed sd6)
    (closed sd7)
    (closed sd8)
    (closed sd10)
    (closed sd11)
    (closed sd12)
    (closed sd13)
    (closed sd15)
    (closed sd16)
    (closed sd17)
    (closed sd18)
    (closed sd19)
    (closed sd22)
    (closed sd23)
    (closed sd24)
    (faulty l2)
    (faulty l3)
    (faulty l4)
    (faulty l5)
    (faulty l9)
    (faulty l14)
    (faulty l16)
    (faulty l17)
    (faulty l18)
    (faulty l21)
    (faulty l22)
    (faulty l24)
    (ext l1 sd6 side1)
    (ext l1 cb1 side2)
    (con sd6 side1 cb1 side2)
    (con cb1 side2 sd6 side1)
    (ext l1 sd1 side2)
    (con sd1 side2 cb1 side2)
    (con cb1 side2 sd1 side2)
    (con sd1 side2 sd6 side1)
    (con sd6 side1 sd1 side2)
    (ext l2 sd4 side1)
    (ext l2 sd1 side1)
    (con sd4 side1 sd1 side1)
    (con sd1 side1 sd4 side1)
    (ext l2 sd2 side2)
    (con sd2 side2 sd1 side1)
    (con sd1 side1 sd2 side2)
    (con sd2 side2 sd4 side1)
    (con sd4 side1 sd2 side2)
    (ext l3 sd3 side1)
    (ext l3 sd2 side1)
    (con sd3 side1 sd2 side1)
    (con sd2 side1 sd3 side1)
    (ext l4 sd5 side2)
    (ext l4 sd4 side2)
    (con sd5 side2 sd4 side2)
    (con sd4 side2 sd5 side2)
    (ext l5 sd3 side2)
    (ext l5 cb2 side2)
    (con sd3 side2 cb2 side2)
    (con cb2 side2 sd3 side2)
    (ext l5 sd7 side2)
    (con sd7 side2 cb2 side2)
    (con cb2 side2 sd7 side2)
    (con sd7 side2 sd3 side2)
    (con sd3 side2 sd7 side2)
    (ext l6 sd8 side2)
    (ext l6 sd7 side1)
    (con sd8 side2 sd7 side1)
    (con sd7 side1 sd8 side2)
    (ext l7 sd9 side2)
    (ext l7 sd8 side1)
    (con sd9 side2 sd8 side1)
    (con sd8 side1 sd9 side2)
    (ext l8 sd10 side1)
    (ext l8 cb3 side2)
    (con sd10 side1 cb3 side2)
    (con cb3 side2 sd10 side1)
    (ext l9 sd14 side2)
    (ext l9 sd10 side2)
    (con sd14 side2 sd10 side2)
    (con sd10 side2 sd14 side2)
    (ext l9 sd11 side2)
    (con sd11 side2 sd10 side2)
    (con sd10 side2 sd11 side2)
    (con sd11 side2 sd14 side2)
    (con sd14 side2 sd11 side2)
    (ext l10 sd13 side2)
    (ext l10 sd11 side1)
    (con sd13 side2 sd11 side1)
    (con sd11 side1 sd13 side2)
    (ext l10 sd12 side2)
    (con sd12 side2 sd11 side1)
    (con sd11 side1 sd12 side2)
    (con sd12 side2 sd13 side2)
    (con sd13 side2 sd12 side2)
    (ext l11 sd20 side2)
    (ext l11 sd12 side1)
    (con sd20 side2 sd12 side1)
    (con sd12 side1 sd20 side2)
    (ext l12 sd9 side1)
    (ext l12 cb4 side2)
    (con sd9 side1 cb4 side2)
    (con cb4 side2 sd9 side1)
    (ext l12 sd15 side2)
    (con sd15 side2 cb4 side2)
    (con cb4 side2 sd15 side2)
    (con sd15 side2 sd9 side1)
    (con sd9 side1 sd15 side2)
    (ext l13 sd21 side1)
    (ext l13 sd15 side1)
    (con sd21 side1 sd15 side1)
    (con sd15 side1 sd21 side1)
    (ext l13 sd16 side2)
    (con sd16 side2 sd15 side1)
    (con sd15 side1 sd16 side2)
    (con sd16 side2 sd21 side1)
    (con sd21 side1 sd16 side2)
    (ext l14 sd17 side1)
    (ext l14 sd16 side1)
    (con sd17 side1 sd16 side1)
    (con sd16 side1 sd17 side1)
    (ext l15 sd18 side1)
    (ext l15 sd17 side2)
    (con sd18 side1 sd17 side2)
    (con sd17 side2 sd18 side1)
    (ext l16 sd19 side1)
    (ext l16 sd18 side2)
    (con sd19 side1 sd18 side2)
    (con sd18 side2 sd19 side1)
    (ext l17 sd20 side1)
    (ext l17 sd19 side2)
    (con sd20 side1 sd19 side2)
    (con sd19 side2 sd20 side1)
    (ext l18 sd21 side2)
    (ext l18 cb5 side2)
    (con sd21 side2 cb5 side2)
    (con cb5 side2 sd21 side2)
    (ext l18 sd22 side2)
    (con sd22 side2 cb5 side2)
    (con cb5 side2 sd22 side2)
    (con sd22 side2 sd21 side2)
    (con sd21 side2 sd22 side2)
    (ext l19 sd23 side2)
    (ext l19 sd22 side1)
    (con sd23 side2 sd22 side1)
    (con sd22 side1 sd23 side2)
    (ext l20 sd24 side1)
    (ext l20 sd23 side1)
    (con sd24 side1 sd23 side1)
    (con sd23 side1 sd24 side1)
    (ext l21 sd14 side1)
    (ext l21 sd24 side2)
    (con sd14 side1 sd24 side2)
    (con sd24 side2 sd14 side1)
    (ext l22 earth side2)
    (ext l22 sd13 side1)
    (con earth side2 sd13 side1)
    (con sd13 side1 earth side2)
    (ext l23 earth side2)
    (ext l23 sd6 side2)
    (con earth side2 sd6 side2)
    (con sd6 side2 earth side2)
    (ext l24 earth side2)
    (ext l24 sd5 side1)
    (con earth side2 sd5 side1)
    (con sd5 side1 earth side2)
  )
  (:goal
    (and
      (fixed)
      (forall (?b - DEVICE) (not (affected ?b)))
      (fed l1)
      (fed l6)
      (fed l7)
      (fed l8)
      (fed l12)
      (fed l13)
      (fed l23)
    )
  )
)
