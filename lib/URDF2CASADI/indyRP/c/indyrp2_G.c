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
  #define CASADI_PREFIX(ID) indyrp2_G_ ## ID
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

static const casadi_int casadi_s0[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s1[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};

/* generalized_gravity:(i0[14])->(o0[7]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a6, a7, a8, a9;
  a0=2.2204460492503131e-16;
  a1=arg[0]? arg[0][3] : 0;
  a2=(a0*a1);
  a3=arg[0]? arg[0][2] : 0;
  a2=(a2-a3);
  a4=arg[0]? arg[0][4] : 0;
  a5=(a0*a4);
  a6=-2.2204460492503131e-16;
  a7=arg[0]? arg[0][5] : 0;
  a8=(a6*a7);
  a5=(a5+a8);
  a8=arg[0]? arg[0][6] : 0;
  a9=(a0*a8);
  a10=arg[0]? arg[0][7] : 0;
  a9=(a9+a10);
  a11=arg[0]? arg[0][8] : 0;
  a12=(a0*a11);
  a13=arg[0]? arg[0][9] : 0;
  a14=(a6*a13);
  a12=(a12+a14);
  a14=arg[0]? arg[0][10] : 0;
  a15=arg[0]? arg[0][11] : 0;
  a16=(a0*a15);
  a16=(a14-a16);
  a17=6.8699999999999997e-02;
  a18=arg[0]? arg[0][12] : 0;
  a19=(a0*a18);
  a20=arg[0]? arg[0][13] : 0;
  a21=(a6*a20);
  a19=(a19+a21);
  a21=1.7194000000000001e-01;
  a22=(a0*a14);
  a22=(a22+a15);
  a23=9.8100000000000005e+00;
  a24=(a23*a2);
  a25=(a5*a24);
  a26=(a0*a3);
  a26=(a1+a26);
  a23=(a23*a26);
  a27=(a4*a23);
  a25=(a25+a27);
  a27=(a9*a25);
  a28=(a0*a10);
  a29=(a6*a4);
  a30=(a0*a7);
  a29=(a29-a30);
  a30=(a29*a24);
  a31=(a7*a23);
  a30=(a30-a31);
  a31=(a28*a30);
  a32=(a0*a10);
  a32=(a32-a8);
  a33=(a0*a23);
  a33=(a33-a24);
  a34=(a32*a33);
  a31=(a31+a34);
  a27=(a27+a31);
  a31=(a12*a27);
  a34=(a0*a10);
  a34=(a8-a34);
  a35=(a34*a25);
  a36=(a0*a8);
  a37=(a36*a30);
  a8=(a0*a8);
  a10=(a10+a8);
  a8=(a10*a33);
  a37=(a37+a8);
  a35=(a35+a37);
  a37=(a11*a35);
  a8=(a0*a25);
  a8=(a8-a30);
  a38=(a13*a8);
  a37=(a37-a38);
  a31=(a31+a37);
  a37=(a22*a31);
  a38=(a0*a15);
  a39=(a6*a11);
  a40=(a0*a13);
  a39=(a39-a40);
  a40=(a39*a27);
  a41=(a13*a35);
  a42=(a11*a8);
  a41=(a41+a42);
  a40=(a40-a41);
  a41=(a38*a40);
  a42=(a0*a15);
  a42=(a42-a14);
  a43=(a0*a35);
  a44=(a0*a8);
  a43=(a43+a44);
  a43=(a43-a27);
  a44=(a42*a43);
  a41=(a41+a44);
  a37=(a37+a41);
  a41=(a19*a37);
  a44=(a16*a31);
  a45=(a0*a14);
  a46=(a45*a40);
  a14=(a0*a14);
  a15=(a15+a14);
  a14=(a15*a43);
  a46=(a46+a14);
  a44=(a44+a46);
  a46=(a18*a44);
  a14=(a0*a31);
  a14=(a14-a40);
  a47=(a20*a14);
  a46=(a46-a47);
  a41=(a41+a46);
  a41=(a21*a41);
  a19=(a19*a41);
  a6=(a6*a18);
  a46=(a0*a20);
  a6=(a6-a46);
  a46=(a6*a37);
  a47=(a20*a44);
  a48=(a18*a14);
  a47=(a47+a48);
  a46=(a46-a47);
  a46=(a21*a46);
  a6=(a6*a46);
  a47=(a0*a44);
  a48=(a0*a14);
  a47=(a47+a48);
  a47=(a47-a37);
  a21=(a21*a47);
  a6=(a6-a21);
  a19=(a19+a6);
  a6=(a17*a19);
  a47=-1.6800000000000001e-01;
  a48=(a0*a21);
  a49=(a18*a46);
  a48=(a48-a49);
  a49=(a20*a41);
  a48=(a48-a49);
  a49=(a47*a48);
  a6=(a6-a49);
  a49=(a16*a6);
  a18=(a18*a41);
  a21=(a0*a21);
  a20=(a20*a46);
  a21=(a21-a20);
  a18=(a18+a21);
  a47=(a47*a18);
  a21=(a0*a47);
  a49=(a49+a21);
  a17=(a17*a18);
  a21=(a22*a17);
  a49=(a49-a21);
  a21=-1.1430000000000000e-01;
  a20=2.0315200000000000e+00;
  a37=(a20*a37);
  a37=(a37+a19);
  a19=(a42*a37);
  a44=(a20*a44);
  a44=(a44+a18);
  a18=(a15*a44);
  a19=(a19+a18);
  a18=(a21*a19);
  a46=8.3500000000000005e-02;
  a41=(a38*a37);
  a50=(a45*a44);
  a20=(a20*a14);
  a20=(a20+a48);
  a50=(a50-a20);
  a41=(a41+a50);
  a50=(a46*a41);
  a18=(a18-a50);
  a49=(a49+a18);
  a18=(a12*a49);
  a45=(a45*a6);
  a45=(a45-a47);
  a38=(a38*a17);
  a45=(a45-a38);
  a22=(a22*a37);
  a16=(a16*a44);
  a20=(a0*a20);
  a16=(a16+a20);
  a22=(a22+a16);
  a46=(a46*a22);
  a45=(a45+a46);
  a46=(a39*a45);
  a15=(a15*a6);
  a42=(a42*a17);
  a15=(a15-a42);
  a21=(a21*a22);
  a15=(a15-a21);
  a46=(a46-a15);
  a18=(a18+a46);
  a46=-7.4700000000000003e-02;
  a21=2.5286300000000002e+00;
  a31=(a21*a31);
  a31=(a31+a22);
  a22=(a11*a31);
  a43=(a21*a43);
  a43=(a43+a19);
  a19=(a0*a43);
  a21=(a21*a40);
  a21=(a21+a41);
  a41=(a13*a21);
  a19=(a19-a41);
  a22=(a22+a19);
  a19=(a46*a22);
  a18=(a18-a19);
  a19=(a9*a18);
  a41=(a11*a49);
  a40=(a0*a15);
  a42=(a13*a45);
  a40=(a40-a42);
  a41=(a41+a40);
  a12=(a12*a31);
  a39=(a39*a21);
  a39=(a39-a43);
  a12=(a12+a39);
  a46=(a46*a12);
  a39=-2.6650000000000001e-01;
  a43=(a0*a43);
  a21=(a11*a21);
  a43=(a43-a21);
  a31=(a13*a31);
  a43=(a43-a31);
  a31=(a39*a43);
  a46=(a46-a31);
  a41=(a41+a46);
  a46=(a34*a41);
  a31=(a0*a15);
  a11=(a11*a45);
  a31=(a31-a11);
  a13=(a13*a49);
  a31=(a31-a13);
  a39=(a39*a22);
  a31=(a31+a39);
  a39=(a0*a31);
  a46=(a46+a39);
  a19=(a19+a46);
  a46=1.1530000000000000e-01;
  a39=4.0273300000000001e+00;
  a27=(a39*a27);
  a27=(a27+a12);
  a12=(a32*a27);
  a35=(a39*a35);
  a35=(a35+a22);
  a22=(a10*a35);
  a12=(a12+a22);
  a22=(a46*a12);
  a13=6.5500000000000003e-02;
  a49=(a28*a27);
  a11=(a36*a35);
  a39=(a39*a8);
  a39=(a39+a43);
  a11=(a11-a39);
  a49=(a49+a11);
  a11=(a13*a49);
  a22=(a22-a11);
  a19=(a19+a22);
  a22=(a5*a19);
  a28=(a28*a18);
  a36=(a36*a41);
  a36=(a36-a31);
  a28=(a28+a36);
  a9=(a9*a27);
  a34=(a34*a35);
  a39=(a0*a39);
  a34=(a34+a39);
  a9=(a9+a34);
  a13=(a13*a9);
  a28=(a28+a13);
  a13=(a29*a28);
  a32=(a32*a18);
  a10=(a10*a41);
  a32=(a32+a10);
  a46=(a46*a9);
  a32=(a32-a46);
  a13=(a13-a32);
  a22=(a22+a13);
  a13=8.4699999999999998e-02;
  a46=4.0825899999999997e+00;
  a25=(a46*a25);
  a25=(a25+a9);
  a9=(a4*a25);
  a33=(a46*a33);
  a33=(a33+a12);
  a12=(a0*a33);
  a46=(a46*a30);
  a46=(a46+a49);
  a49=(a7*a46);
  a12=(a12-a49);
  a9=(a9+a12);
  a12=(a13*a9);
  a22=(a22-a12);
  a2=(a2*a22);
  a22=(a4*a19);
  a12=(a0*a32);
  a49=(a7*a28);
  a12=(a12-a49);
  a22=(a22+a12);
  a5=(a5*a25);
  a29=(a29*a46);
  a29=(a29-a33);
  a5=(a5+a29);
  a13=(a13*a5);
  a29=-3.8400000000000001e-01;
  a33=(a0*a33);
  a46=(a4*a46);
  a33=(a33-a46);
  a25=(a7*a25);
  a33=(a33-a25);
  a25=(a29*a33);
  a13=(a13-a25);
  a22=(a22+a13);
  a26=(a26*a22);
  a2=(a2+a26);
  a26=-1.0929999999999999e-01;
  a22=(a0*a3);
  a22=(a22+a1);
  a13=5.9539700000000000e+00;
  a24=(a13*a24);
  a24=(a24+a5);
  a22=(a22*a24);
  a1=(a0*a1);
  a3=(a3-a1);
  a13=(a13*a23);
  a13=(a13+a9);
  a3=(a3*a13);
  a33=(a0*a33);
  a3=(a3+a33);
  a22=(a22+a3);
  a26=(a26*a22);
  a2=(a2-a26);
  if (res[0]!=0) res[0][0]=a2;
  a0=(a0*a32);
  a4=(a4*a28);
  a0=(a0-a4);
  a7=(a7*a19);
  a0=(a0-a7);
  a29=(a29*a9);
  a0=(a0+a29);
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a32;
  if (res[0]!=0) res[0][3]=a31;
  if (res[0]!=0) res[0][4]=a15;
  if (res[0]!=0) res[0][5]=a47;
  a47=0.;
  if (res[0]!=0) res[0][6]=a47;
  return 0;
}

CASADI_SYMBOL_EXPORT int generalized_gravity(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int generalized_gravity_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int generalized_gravity_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void generalized_gravity_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int generalized_gravity_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void generalized_gravity_release(int mem) {
}

CASADI_SYMBOL_EXPORT void generalized_gravity_incref(void) {
}

CASADI_SYMBOL_EXPORT void generalized_gravity_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int generalized_gravity_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int generalized_gravity_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real generalized_gravity_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* generalized_gravity_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* generalized_gravity_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* generalized_gravity_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* generalized_gravity_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int generalized_gravity_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
