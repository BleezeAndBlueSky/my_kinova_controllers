//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Gq.cpp
//
// Code generation for function 'Gq'
//

// Include files
#include "matlab/Gq.h"
#include <cmath>

// Function Definitions
void Gq(double th2, double th3, double th4, double th5, double th6,
        double b_Gq[6])
{
  double t10;
  double t11;
  double t12;
  double t13;
  double t14;
  double t18;
  double t19;
  double t2;
  double t20;
  double t25;
  double t27;
  double t28;
  double t29;
  double t3;
  double t30;
  double t31;
  double t33;
  double t34;
  double t35;
  double t35_tmp;
  double t36;
  double t37;
  double t38;
  double t38_tmp;
  double t4;
  double t41;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  // GQ
  //     GQ = GQ(TH2,TH3,TH4,TH5,TH6)
  //     This function was generated by the Symbolic Math Toolbox version 8.7.
  //     30-Nov-2021 23:04:20
  t2 = std::cos(th2);
  t3 = std::cos(th3);
  t4 = std::cos(th4);
  t5 = std::cos(th5);
  t6 = std::cos(th6);
  t7 = std::sin(th2);
  t8 = std::sin(th3);
  t9 = std::sin(th4);
  t10 = std::sin(th5);
  t11 = std::sin(th6);
  t12 = t2 * t3;
  t13 = t2 * t8;
  t14 = t3 * t7;
  t3 = t7 * t8;
  t8 = t12 + t3;
  t33 = t12 * 0.000164052;
  t34 = t3 * 0.000164052;
  t36 = t13 * 6.1254716348;
  t37 = t14 * 6.1254716348;
  t18 = t13 + -t14;
  t19 = t5 * t8;
  t20 = t10 * t8;
  t27 = t4 * t8 * 6.6444E-6;
  t35_tmp = t9 * t11;
  t35 = t35_tmp * t8 * 0.0013769;
  t38_tmp = t6 * t9;
  t38 = t38_tmp * t8 * 0.0558698;
  t41 = t9 * t8 * 0.0015813672000000031;
  t3 = t4 * t19;
  t12 = t10 * t18;
  t14 = t4 * t5 * t18;
  t13 = t4 * t20 * 0.9734130476;
  t10 = t5 * t18 * 0.9734130476;
  t25 = t4 * t12;
  t28 = t3 * 6.6444E-6;
  t29 = t12 * 6.6444E-6;
  t30 = t20 + t14;
  t31 = t19 + -t25;
  b_Gq[0] = 0.0;
  t3 -= t12;
  t8 = t11 * t3;
  t3 *= t6;
  b_Gq[1] =
      ((((((((((((((t2 * -0.000432866 - t7 * 13.7691688932) + t27) + t28) -
                 t29) -
                t33) -
               t34) +
              t35) +
             t36) -
            t37) +
           t38) +
          t13) +
         t10) -
        t41) +
       t3 * -0.0013769) +
      t8 * 0.0558698;
  b_Gq[2] =
      ((((((((((((-t27 - t28) + t29) + t33) + t34) - t35) - t36) + t37) - t38) -
          t13) -
         t10) +
        t41) +
       t8 * -0.0558698) +
      t3 * 0.0013769;
  t3 = t5 * t9;
  b_Gq[3] = ((((t4 * t18 * 0.0015813672000000031 + t9 * t18 * 6.6444E-6) +
               t9 * t12 * 0.9734130476) -
              t4 * t6 * t18 * 0.0558698) +
             t3 * t18 * 6.6444E-6) +
            ((t4 * t11 * t18 * -0.0013769 - t5 * t6 * t9 * t18 * 0.0013769) +
             t3 * t11 * t18 * 0.0558698);
  b_Gq[4] = ((((t19 * -6.6444E-6 - t20 * 0.9734130476) - t14 * 0.9734130476) +
              t25 * 6.6444E-6) +
             t6 * t31 * 0.0013769) +
            t11 * t31 * -0.0558698;
  b_Gq[5] = ((t6 * t30 * -0.0558698 - t11 * t30 * 0.0013769) -
             t38_tmp * t18 * 0.0013769) +
            t35_tmp * t18 * 0.0558698;
}

// End of code generation (Gq.cpp)