/* This file was automatically generated by CasADi 3.6.3+.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) indy7_dualarm_J_s_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* J_s:(q[6])->(J_s[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a3, a4, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  if (res[0]!=0) res[0][3]=a0;
  a0=-8.6601905262873902e-01;
  if (res[0]!=0) res[0][4]=a0;
  a1=-5.0001100036301360e-01;
  if (res[0]!=0) res[0][5]=a1;
  a2=-6.7116476578727269e-02;
  a3=-1.0900000000000000e-01;
  a4=arg[0]? arg[0][0] : 0;
  a5=cos(a4);
  a6=(a1*a5);
  a7=(a3*a6);
  a8=-1.9225622968358005e-01;
  a7=(a7+a8);
  a2=(a2+a7);
  a7=2.2204460492503131e-16;
  a8=8.6601905262873902e-01;
  a4=sin(a4);
  a9=(a8*a4);
  a10=(a7*a9);
  a8=(a8*a5);
  a10=(a10-a8);
  a11=(a2*a10);
  a12=-3.8750852528133553e-02;
  a13=(a3*a8);
  a14=-1.1100244208058901e-01;
  a13=(a13+a14);
  a12=(a12+a13);
  a13=(a1*a4);
  a14=(a7*a13);
  a14=(a14-a6);
  a15=(a12*a14);
  a11=(a11-a15);
  if (res[0]!=0) res[0][6]=a11;
  a11=(a7*a5);
  a11=(a11+a4);
  a15=(a12*a11);
  a3=(a3*a4);
  a16=(a3*a10);
  a15=(a15+a16);
  if (res[0]!=0) res[0][7]=a15;
  a15=(a3*a14);
  a16=(a2*a11);
  a15=(a15+a16);
  a15=(-a15);
  if (res[0]!=0) res[0][8]=a15;
  if (res[0]!=0) res[0][9]=a11;
  if (res[0]!=0) res[0][10]=a14;
  if (res[0]!=0) res[0][11]=a10;
  a15=-4.5000000000000001e-01;
  a16=arg[0]? arg[0][1] : 0;
  a17=cos(a16);
  a18=(a7*a17);
  a16=sin(a16);
  a18=(a18+a16);
  a19=(a13*a18);
  a20=(a7*a16);
  a21=(a6*a20);
  a22=(a7*a16);
  a22=(a22-a17);
  a23=(a0*a22);
  a21=(a21+a23);
  a19=(a19+a21);
  a21=(a15*a19);
  a23=-3.0499999999999999e-02;
  a24=(a23*a14);
  a21=(a21+a24);
  a2=(a2+a21);
  a21=(a2*a10);
  a24=(a9*a18);
  a25=(a8*a20);
  a22=(a1*a22);
  a25=(a25+a22);
  a24=(a24+a25);
  a25=(a15*a24);
  a22=(a23*a10);
  a25=(a25+a22);
  a12=(a12+a25);
  a25=(a12*a14);
  a21=(a21-a25);
  if (res[0]!=0) res[0][12]=a21;
  a21=(a12*a11);
  a18=(a5*a18);
  a20=(a4*a20);
  a18=(a18-a20);
  a15=(a15*a18);
  a23=(a23*a11);
  a15=(a15+a23);
  a15=(a15-a3);
  a3=(a15*a10);
  a21=(a21-a3);
  if (res[0]!=0) res[0][13]=a21;
  a21=(a15*a14);
  a3=(a2*a11);
  a21=(a21-a3);
  if (res[0]!=0) res[0][14]=a21;
  if (res[0]!=0) res[0][15]=a11;
  if (res[0]!=0) res[0][16]=a14;
  if (res[0]!=0) res[0][17]=a10;
  a21=-2.6700000000000002e-01;
  a3=arg[0]? arg[0][2] : 0;
  a23=cos(a3);
  a20=(a19*a23);
  a25=(a7*a16);
  a25=(a17-a25);
  a13=(a13*a25);
  a22=(a7*a17);
  a6=(a6*a22);
  a17=(a7*a17);
  a16=(a16+a17);
  a0=(a0*a16);
  a6=(a6+a0);
  a13=(a13+a6);
  a3=sin(a3);
  a6=(a13*a3);
  a20=(a20+a6);
  a6=(a21*a20);
  a0=-7.4999999999999997e-02;
  a17=(a0*a14);
  a6=(a6+a17);
  a2=(a2+a6);
  a9=(a9*a25);
  a8=(a8*a22);
  a1=(a1*a16);
  a8=(a8+a1);
  a9=(a9+a8);
  a8=(a9*a23);
  a1=(a24*a3);
  a8=(a8-a1);
  a1=(a7*a8);
  a16=(a7*a10);
  a1=(a1+a16);
  a24=(a24*a23);
  a9=(a9*a3);
  a24=(a24+a9);
  a1=(a1-a24);
  a9=(a2*a1);
  a16=(a21*a24);
  a6=(a0*a10);
  a16=(a16+a6);
  a12=(a12+a16);
  a13=(a13*a23);
  a19=(a19*a3);
  a13=(a13-a19);
  a19=(a7*a13);
  a16=(a7*a14);
  a19=(a19+a16);
  a19=(a19-a20);
  a16=(a12*a19);
  a9=(a9-a16);
  if (res[0]!=0) res[0][18]=a9;
  a5=(a5*a25);
  a4=(a4*a22);
  a5=(a5-a4);
  a4=(a5*a23);
  a22=(a18*a3);
  a4=(a4-a22);
  a22=(a7*a4);
  a25=(a7*a11);
  a22=(a22+a25);
  a18=(a18*a23);
  a5=(a5*a3);
  a18=(a18+a5);
  a22=(a22-a18);
  a5=(a12*a22);
  a21=(a21*a18);
  a0=(a0*a11);
  a21=(a21+a0);
  a15=(a15+a21);
  a21=(a15*a1);
  a5=(a5-a21);
  if (res[0]!=0) res[0][19]=a5;
  a5=(a15*a19);
  a21=(a2*a22);
  a5=(a5-a21);
  if (res[0]!=0) res[0][20]=a5;
  if (res[0]!=0) res[0][21]=a22;
  if (res[0]!=0) res[0][22]=a19;
  if (res[0]!=0) res[0][23]=a1;
  a5=-1.1400000000000000e-01;
  a21=-2.2204460492503131e-16;
  a0=arg[0]? arg[0][3] : 0;
  a3=cos(a0);
  a23=(a21*a3);
  a0=sin(a0);
  a25=(a7*a0);
  a23=(a23-a25);
  a25=(a20*a23);
  a9=(a13*a0);
  a16=(a14*a3);
  a9=(a9+a16);
  a25=(a25-a9);
  a9=(a5*a25);
  a16=8.3000000000000004e-02;
  a6=(a16*a19);
  a9=(a9+a6);
  a2=(a2+a9);
  a9=(a7*a3);
  a21=(a21*a0);
  a9=(a9+a21);
  a21=(a24*a9);
  a6=(a8*a3);
  a17=(a10*a0);
  a6=(a6-a17);
  a21=(a21+a6);
  a6=(a7*a21);
  a24=(a24*a23);
  a8=(a8*a0);
  a10=(a10*a3);
  a8=(a8+a10);
  a24=(a24-a8);
  a6=(a6-a24);
  a8=(a2*a6);
  a10=(a5*a24);
  a17=(a16*a1);
  a10=(a10+a17);
  a12=(a12+a10);
  a20=(a20*a9);
  a13=(a13*a3);
  a14=(a14*a0);
  a13=(a13-a14);
  a20=(a20+a13);
  a13=(a7*a20);
  a13=(a13-a25);
  a14=(a12*a13);
  a8=(a8-a14);
  if (res[0]!=0) res[0][24]=a8;
  a9=(a18*a9);
  a8=(a4*a3);
  a14=(a11*a0);
  a8=(a8-a14);
  a9=(a9+a8);
  a8=(a7*a9);
  a18=(a18*a23);
  a4=(a4*a0);
  a11=(a11*a3);
  a4=(a4+a11);
  a18=(a18-a4);
  a8=(a8-a18);
  a4=(a12*a8);
  a5=(a5*a18);
  a16=(a16*a22);
  a5=(a5+a16);
  a15=(a15+a5);
  a5=(a15*a6);
  a4=(a4-a5);
  if (res[0]!=0) res[0][25]=a4;
  a4=(a15*a13);
  a5=(a2*a8);
  a4=(a4-a5);
  if (res[0]!=0) res[0][26]=a4;
  if (res[0]!=0) res[0][27]=a8;
  if (res[0]!=0) res[0][28]=a13;
  if (res[0]!=0) res[0][29]=a6;
  a4=-1.6800000000000001e-01;
  a5=arg[0]? arg[0][4] : 0;
  a16=cos(a5);
  a11=(a7*a16);
  a5=sin(a5);
  a11=(a11+a5);
  a3=(a20*a11);
  a0=(a7*a5);
  a23=(a25*a0);
  a14=(a7*a5);
  a14=(a14-a16);
  a10=(a19*a14);
  a23=(a23+a10);
  a3=(a3+a23);
  a23=(a4*a3);
  a10=6.9000000000000006e-02;
  a17=(a10*a13);
  a23=(a23+a17);
  a2=(a2+a23);
  a23=(a7*a5);
  a23=(a16-a23);
  a17=(a21*a23);
  a26=(a7*a16);
  a27=(a24*a26);
  a16=(a7*a16);
  a5=(a5+a16);
  a16=(a1*a5);
  a27=(a27+a16);
  a17=(a17+a27);
  a17=(a7*a17);
  a27=(a7*a6);
  a17=(a17+a27);
  a21=(a21*a11);
  a24=(a24*a0);
  a1=(a1*a14);
  a24=(a24+a1);
  a21=(a21+a24);
  a17=(a17-a21);
  a24=(a2*a17);
  a21=(a4*a21);
  a6=(a10*a6);
  a21=(a21+a6);
  a12=(a12+a21);
  a20=(a20*a23);
  a25=(a25*a26);
  a19=(a19*a5);
  a25=(a25+a19);
  a20=(a20+a25);
  a20=(a7*a20);
  a13=(a7*a13);
  a20=(a20+a13);
  a20=(a20-a3);
  a3=(a12*a20);
  a24=(a24-a3);
  if (res[0]!=0) res[0][30]=a24;
  a23=(a9*a23);
  a26=(a18*a26);
  a5=(a22*a5);
  a26=(a26+a5);
  a23=(a23+a26);
  a23=(a7*a23);
  a7=(a7*a8);
  a23=(a23+a7);
  a9=(a9*a11);
  a18=(a18*a0);
  a22=(a22*a14);
  a18=(a18+a22);
  a9=(a9+a18);
  a23=(a23-a9);
  a12=(a12*a23);
  a4=(a4*a9);
  a10=(a10*a8);
  a4=(a4+a10);
  a15=(a15+a4);
  a4=(a15*a17);
  a12=(a12-a4);
  if (res[0]!=0) res[0][31]=a12;
  a15=(a15*a20);
  a2=(a2*a23);
  a15=(a15-a2);
  if (res[0]!=0) res[0][32]=a15;
  if (res[0]!=0) res[0][33]=a23;
  if (res[0]!=0) res[0][34]=a20;
  if (res[0]!=0) res[0][35]=a17;
  return 0;
}

CASADI_SYMBOL_EXPORT int J_s(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int J_s_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int J_s_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_s_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int J_s_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_s_release(int mem) {
}

CASADI_SYMBOL_EXPORT void J_s_incref(void) {
}

CASADI_SYMBOL_EXPORT void J_s_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int J_s_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int J_s_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real J_s_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_s_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_s_name_out(casadi_int i) {
  switch (i) {
    case 0: return "J_s";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_s_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_s_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int J_s_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
