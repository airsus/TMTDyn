/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * int_mid_step.c
 *
 * Code generation for function 'int_mid_step'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM.h"
#include "int_mid_step.h"

/* Variable Definitions */
static emlrtDCInfo c_emlrtDCI = { 13,  /* lineNo */
  20,                                  /* colNo */
  "int_mid_step",                      /* fName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/int_mid_step.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  1109,                                /* iLast */
  13,                                  /* lineNo */
  20,                                  /* colNo */
  "par.f_ex",                          /* aName */
  "int_mid_step",                      /* fName */
  "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/int_mid_step.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void int_mid_step(const emlrtStack *sp, real_T t, struct0_T *b_par)
{
  real_T step;
  int32_T i3;
  int32_T i4;
  static const int8_T iv5[6] = { 0, 0, 1, 1, 2, 2 };

  /*  l = 0 ; */
  /*  for i = 0 : par.n_m - 2 */
  /*      l = l + z(i*6+3) ; */
  /*  end */
  /*  lambda = 1 + l / par.var(5) ; */
  /*  input p & ext. forces */
  /*  temp = interp1( par.f_ex(:,1) , [ par.f_ex(:,2:7) par.p(:,2:4) ] , t , 'nearest' ) ; */
  step = muDoubleScalarFloor(t / 0.05);
  i3 = (int32_T)step;
  if (step != i3) {
    emlrtIntegerCheckR2012b(step, &c_emlrtDCI, sp);
  }

  if ((i3 < 1) || (i3 > 1109)) {
    emlrtDynamicBoundsCheckR2012b(i3, 1, 1109, &d_emlrtBCI, sp);
  }

  for (i4 = 0; i4 < 6; i4++) {
    b_par->var[21 + i4] = b_par->p[(i3 + 1109 * (1 + iv5[i4])) - 1];
    b_par->var[i4 + 27] = b_par->f_ex[(i3 + 1109 * (1 + i4)) - 1];
  }

  b_par->var[33] = 1.0;
}

/* End of code generation (int_mid_step.c) */
