/* This file was automatically generated by CasADi 3.6.3.
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
  #define CASADI_PREFIX(ID) indy7_J_b_ ## ID
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
#define casadi_sq CASADI_PREFIX(sq)

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

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* J_b:(q[6])->(J_b[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a6, a7, a8, a9;
  a0=arg[0]? arg[0][0] : 0;
  a1=sin(a0);
  a2=2.2204460492503131e-16;
  a3=arg[0]? arg[0][1] : 0;
  a4=cos(a3);
  a5=(a2*a4);
  a3=sin(a3);
  a5=(a5+a3);
  a6=(a1*a5);
  a0=cos(a0);
  a7=(a2*a3);
  a8=(a0*a7);
  a6=(a6+a8);
  a8=arg[0]? arg[0][2] : 0;
  a9=cos(a8);
  a10=(a6*a9);
  a11=(a2*a3);
  a11=(a4-a11);
  a12=(a1*a11);
  a13=(a2*a4);
  a14=(a0*a13);
  a12=(a12+a14);
  a8=sin(a8);
  a14=(a12*a8);
  a10=(a10+a14);
  a14=arg[0]? arg[0][3] : 0;
  a15=cos(a14);
  a16=(a2*a15);
  a17=-2.2204460492503131e-16;
  a14=sin(a14);
  a18=(a17*a14);
  a16=(a16+a18);
  a18=(a10*a16);
  a12=(a12*a9);
  a19=(a6*a8);
  a12=(a12-a19);
  a19=(a12*a15);
  a20=(a2*a1);
  a20=(a20-a0);
  a21=(a20*a14);
  a19=(a19-a21);
  a18=(a18+a19);
  a19=arg[0]? arg[0][4] : 0;
  a21=cos(a19);
  a22=(a2*a21);
  a19=sin(a19);
  a22=(a22+a19);
  a23=(a18*a22);
  a24=(a17*a15);
  a25=(a2*a14);
  a24=(a24-a25);
  a25=(a10*a24);
  a26=(a12*a14);
  a27=(a20*a15);
  a26=(a26+a27);
  a25=(a25-a26);
  a26=(a2*a19);
  a27=(a25*a26);
  a12=(a2*a12);
  a28=(a2*a20);
  a12=(a12+a28);
  a12=(a12-a10);
  a28=(a2*a19);
  a28=(a28-a21);
  a29=(a12*a28);
  a27=(a27+a29);
  a23=(a23+a27);
  a27=arg[0]? arg[0][5] : 0;
  a29=cos(a27);
  a30=(a2*a29);
  a27=sin(a27);
  a31=(a17*a27);
  a30=(a30+a31);
  a31=(a23*a30);
  a32=(a2*a19);
  a32=(a21-a32);
  a33=(a18*a32);
  a34=(a2*a21);
  a35=(a25*a34);
  a21=(a2*a21);
  a19=(a19+a21);
  a21=(a12*a19);
  a35=(a35+a21);
  a33=(a33+a35);
  a35=(a33*a29);
  a18=(a2*a18);
  a18=(a18-a25);
  a21=(a18*a27);
  a35=(a35-a21);
  a31=(a31+a35);
  a35=-4.5000000000000001e-01;
  a5=(a0*a5);
  a7=(a1*a7);
  a5=(a5-a7);
  a7=(a35*a5);
  a21=-3.0499999999999999e-02;
  a36=(a2*a0);
  a36=(a36+a1);
  a37=(a21*a36);
  a7=(a7+a37);
  a37=-1.0900000000000000e-01;
  a38=(a37*a1);
  a7=(a7-a38);
  a39=-2.6700000000000002e-01;
  a40=(a5*a9);
  a11=(a0*a11);
  a1=(a1*a13);
  a11=(a11-a1);
  a1=(a11*a8);
  a40=(a40+a1);
  a1=(a39*a40);
  a13=-7.4999999999999997e-02;
  a41=(a13*a36);
  a1=(a1+a41);
  a1=(a7+a1);
  a41=-1.1400000000000000e-01;
  a42=(a40*a24);
  a11=(a11*a9);
  a5=(a5*a8);
  a11=(a11-a5);
  a5=(a11*a14);
  a43=(a36*a15);
  a5=(a5+a43);
  a42=(a42-a5);
  a5=(a41*a42);
  a43=8.3000000000000004e-02;
  a44=(a2*a11);
  a45=(a2*a36);
  a44=(a44+a45);
  a44=(a44-a40);
  a45=(a43*a44);
  a5=(a5+a45);
  a5=(a1+a5);
  a45=-1.6800000000000001e-01;
  a40=(a40*a16);
  a11=(a11*a15);
  a46=(a36*a14);
  a11=(a11-a46);
  a40=(a40+a11);
  a11=(a40*a22);
  a46=(a42*a26);
  a47=(a44*a28);
  a46=(a46+a47);
  a11=(a11+a46);
  a46=(a45*a11);
  a47=6.9000000000000006e-02;
  a48=(a2*a40);
  a48=(a48-a42);
  a49=(a47*a48);
  a46=(a46+a49);
  a46=(a5+a46);
  a49=5.9999999999999998e-02;
  a40=(a40*a32);
  a42=(a42*a34);
  a50=(a44*a19);
  a42=(a42+a50);
  a40=(a40+a42);
  a42=(a2*a40);
  a50=(a2*a48);
  a42=(a42+a50);
  a42=(a42-a11);
  a50=(a49*a42);
  a50=(a46+a50);
  a51=(a31*a50);
  a52=(a11*a30);
  a53=(a40*a29);
  a54=(a48*a27);
  a53=(a53-a54);
  a52=(a52+a53);
  a37=(a37*a0);
  a6=(a35*a6);
  a21=(a21*a20);
  a6=(a6+a21);
  a6=(a37+a6);
  a10=(a39*a10);
  a13=(a13*a20);
  a10=(a10+a13);
  a10=(a6+a10);
  a25=(a41*a25);
  a13=(a43*a12);
  a25=(a25+a13);
  a25=(a10+a25);
  a13=(a45*a23);
  a21=(a47*a18);
  a13=(a13+a21);
  a13=(a25+a13);
  a21=(a2*a33);
  a0=(a2*a18);
  a21=(a21+a0);
  a21=(a21-a23);
  a0=(a49*a21);
  a0=(a13+a0);
  a53=(a52*a0);
  a51=(a51-a53);
  if (res[0]!=0) res[0][0]=a51;
  a17=(a17*a29);
  a51=(a2*a27);
  a17=(a17-a51);
  a23=(a23*a17);
  a33=(a33*a27);
  a51=(a18*a29);
  a33=(a33+a51);
  a23=(a23-a33);
  a33=(a23*a50);
  a11=(a11*a17);
  a40=(a40*a27);
  a51=(a48*a29);
  a40=(a40+a51);
  a11=(a11-a40);
  a40=(a11*a0);
  a33=(a33-a40);
  if (res[0]!=0) res[0][1]=a33;
  a33=(a21*a50);
  a40=(a42*a0);
  a33=(a33-a40);
  if (res[0]!=0) res[0][2]=a33;
  a33=(a2*a3);
  a33=(a33-a4);
  a40=(a33*a9);
  a4=(a2*a4);
  a3=(a3+a4);
  a4=(a3*a8);
  a40=(a40+a4);
  a16=(a40*a16);
  a3=(a3*a9);
  a8=(a33*a8);
  a3=(a3-a8);
  a15=(a3*a15);
  a16=(a16+a15);
  a22=(a16*a22);
  a24=(a40*a24);
  a14=(a3*a14);
  a24=(a24-a14);
  a26=(a24*a26);
  a3=(a2*a3);
  a3=(a3-a40);
  a28=(a3*a28);
  a26=(a26+a28);
  a22=(a22+a26);
  a30=(a22*a30);
  a32=(a16*a32);
  a34=(a24*a34);
  a19=(a3*a19);
  a34=(a34+a19);
  a32=(a32+a34);
  a34=(a32*a29);
  a16=(a2*a16);
  a16=(a16-a24);
  a19=(a16*a27);
  a34=(a34-a19);
  a30=(a30+a34);
  if (res[0]!=0) res[0][3]=a30;
  a17=(a22*a17);
  a27=(a32*a27);
  a29=(a16*a29);
  a27=(a27+a29);
  a17=(a17-a27);
  if (res[0]!=0) res[0][4]=a17;
  a32=(a2*a32);
  a2=(a2*a16);
  a32=(a32+a2);
  a32=(a32-a22);
  if (res[0]!=0) res[0][5]=a32;
  a2=2.9949999999999999e-01;
  a35=(a35*a33);
  a35=(a2+a35);
  a39=(a39*a40);
  a39=(a35+a39);
  a41=(a41*a24);
  a43=(a43*a3);
  a41=(a41+a43);
  a41=(a39+a41);
  a45=(a45*a22);
  a47=(a47*a16);
  a45=(a45+a47);
  a45=(a41+a45);
  a49=(a49*a32);
  a49=(a45+a49);
  a47=(a49*a20);
  a22=(a2*a20);
  a47=(a47-a22);
  a22=(a52*a47);
  a2=(a2*a36);
  a43=(a49*a36);
  a2=(a2-a43);
  a43=(a31*a2);
  a38=(a38*a20);
  a37=(a37*a36);
  a38=(a38+a37);
  a37=(a50*a20);
  a24=(a0*a36);
  a37=(a37-a24);
  a38=(a38+a37);
  a37=(a30*a38);
  a43=(a43-a37);
  a22=(a22+a43);
  if (res[0]!=0) res[0][6]=a22;
  a22=(a11*a47);
  a43=(a23*a2);
  a37=(a17*a38);
  a43=(a43-a37);
  a22=(a22+a43);
  if (res[0]!=0) res[0][7]=a22;
  a47=(a42*a47);
  a2=(a21*a2);
  a38=(a32*a38);
  a2=(a2-a38);
  a47=(a47+a2);
  if (res[0]!=0) res[0][8]=a47;
  a47=(a52*a36);
  a2=(a31*a20);
  a47=(a47+a2);
  if (res[0]!=0) res[0][9]=a47;
  a47=(a11*a36);
  a2=(a23*a20);
  a47=(a47+a2);
  if (res[0]!=0) res[0][10]=a47;
  a47=(a42*a36);
  a2=(a21*a20);
  a47=(a47+a2);
  if (res[0]!=0) res[0][11]=a47;
  a47=(a49*a20);
  a2=(a35*a20);
  a47=(a47-a2);
  a2=(a52*a47);
  a35=(a35*a36);
  a38=(a49*a36);
  a35=(a35-a38);
  a38=(a31*a35);
  a7=(a7*a20);
  a6=(a6*a36);
  a7=(a7-a6);
  a6=(a50*a20);
  a22=(a0*a36);
  a6=(a6-a22);
  a7=(a7-a6);
  a6=(a30*a7);
  a38=(a38+a6);
  a2=(a2+a38);
  if (res[0]!=0) res[0][12]=a2;
  a2=(a11*a47);
  a38=(a23*a35);
  a6=(a17*a7);
  a38=(a38+a6);
  a2=(a2+a38);
  if (res[0]!=0) res[0][13]=a2;
  a47=(a42*a47);
  a35=(a21*a35);
  a7=(a32*a7);
  a35=(a35+a7);
  a47=(a47+a35);
  if (res[0]!=0) res[0][14]=a47;
  a47=(a52*a36);
  a35=(a31*a20);
  a47=(a47+a35);
  if (res[0]!=0) res[0][15]=a47;
  a47=(a11*a36);
  a35=(a23*a20);
  a47=(a47+a35);
  if (res[0]!=0) res[0][16]=a47;
  a36=(a42*a36);
  a20=(a21*a20);
  a36=(a36+a20);
  if (res[0]!=0) res[0][17]=a36;
  a36=(a10*a3);
  a20=(a39*a12);
  a36=(a36-a20);
  a20=(a0*a3);
  a47=(a49*a12);
  a20=(a20-a47);
  a36=(a36-a20);
  a20=(a52*a36);
  a39=(a39*a44);
  a47=(a1*a3);
  a39=(a39-a47);
  a47=(a49*a44);
  a35=(a50*a3);
  a47=(a47-a35);
  a39=(a39-a47);
  a47=(a31*a39);
  a1=(a1*a12);
  a10=(a10*a44);
  a1=(a1-a10);
  a10=(a50*a12);
  a35=(a0*a44);
  a10=(a10-a35);
  a1=(a1-a10);
  a10=(a30*a1);
  a47=(a47+a10);
  a20=(a20+a47);
  if (res[0]!=0) res[0][18]=a20;
  a20=(a11*a36);
  a47=(a23*a39);
  a10=(a17*a1);
  a47=(a47+a10);
  a20=(a20+a47);
  if (res[0]!=0) res[0][19]=a20;
  a36=(a42*a36);
  a39=(a21*a39);
  a1=(a32*a1);
  a39=(a39+a1);
  a36=(a36+a39);
  if (res[0]!=0) res[0][20]=a36;
  a36=(a52*a44);
  a39=(a31*a12);
  a1=(a30*a3);
  a39=(a39+a1);
  a36=(a36+a39);
  if (res[0]!=0) res[0][21]=a36;
  a36=(a11*a44);
  a39=(a23*a12);
  a1=(a17*a3);
  a39=(a39+a1);
  a36=(a36+a39);
  if (res[0]!=0) res[0][22]=a36;
  a44=(a42*a44);
  a12=(a21*a12);
  a3=(a32*a3);
  a12=(a12+a3);
  a44=(a44+a12);
  if (res[0]!=0) res[0][23]=a44;
  a44=(a25*a16);
  a12=(a41*a18);
  a44=(a44-a12);
  a12=(a0*a16);
  a3=(a49*a18);
  a12=(a12-a3);
  a44=(a44-a12);
  a12=(a52*a44);
  a41=(a41*a48);
  a3=(a5*a16);
  a41=(a41-a3);
  a3=(a49*a48);
  a36=(a50*a16);
  a3=(a3-a36);
  a41=(a41-a3);
  a3=(a31*a41);
  a5=(a5*a18);
  a25=(a25*a48);
  a5=(a5-a25);
  a25=(a50*a18);
  a36=(a0*a48);
  a25=(a25-a36);
  a5=(a5-a25);
  a25=(a30*a5);
  a3=(a3+a25);
  a12=(a12+a3);
  if (res[0]!=0) res[0][24]=a12;
  a12=(a11*a44);
  a3=(a23*a41);
  a25=(a17*a5);
  a3=(a3+a25);
  a12=(a12+a3);
  if (res[0]!=0) res[0][25]=a12;
  a44=(a42*a44);
  a41=(a21*a41);
  a5=(a32*a5);
  a41=(a41+a5);
  a44=(a44+a41);
  if (res[0]!=0) res[0][26]=a44;
  a44=(a52*a48);
  a41=(a31*a18);
  a5=(a30*a16);
  a41=(a41+a5);
  a44=(a44+a41);
  if (res[0]!=0) res[0][27]=a44;
  a44=(a11*a48);
  a41=(a23*a18);
  a5=(a17*a16);
  a41=(a41+a5);
  a44=(a44+a41);
  if (res[0]!=0) res[0][28]=a44;
  a48=(a42*a48);
  a18=(a21*a18);
  a16=(a32*a16);
  a18=(a18+a16);
  a48=(a48+a18);
  if (res[0]!=0) res[0][29]=a48;
  a48=(a13*a32);
  a18=(a45*a21);
  a48=(a48-a18);
  a18=(a0*a32);
  a16=(a49*a21);
  a18=(a18-a16);
  a48=(a48-a18);
  a18=(a52*a48);
  a45=(a45*a42);
  a16=(a46*a32);
  a45=(a45-a16);
  a49=(a49*a42);
  a16=(a50*a32);
  a49=(a49-a16);
  a45=(a45-a49);
  a49=(a31*a45);
  a46=(a46*a21);
  a13=(a13*a42);
  a46=(a46-a13);
  a50=(a50*a21);
  a0=(a0*a42);
  a50=(a50-a0);
  a46=(a46-a50);
  a50=(a30*a46);
  a49=(a49+a50);
  a18=(a18+a49);
  if (res[0]!=0) res[0][30]=a18;
  a18=(a11*a48);
  a49=(a23*a45);
  a50=(a17*a46);
  a49=(a49+a50);
  a18=(a18+a49);
  if (res[0]!=0) res[0][31]=a18;
  a48=(a42*a48);
  a45=(a21*a45);
  a46=(a32*a46);
  a45=(a45+a46);
  a48=(a48+a45);
  if (res[0]!=0) res[0][32]=a48;
  a52=(a52*a42);
  a31=(a31*a21);
  a30=(a30*a32);
  a31=(a31+a30);
  a52=(a52+a31);
  if (res[0]!=0) res[0][33]=a52;
  a11=(a11*a42);
  a23=(a23*a21);
  a17=(a17*a32);
  a23=(a23+a17);
  a11=(a11+a23);
  if (res[0]!=0) res[0][34]=a11;
  a42=casadi_sq(a42);
  a21=casadi_sq(a21);
  a32=casadi_sq(a32);
  a21=(a21+a32);
  a42=(a42+a21);
  if (res[0]!=0) res[0][35]=a42;
  return 0;
}

CASADI_SYMBOL_EXPORT int J_b(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int J_b_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int J_b_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_b_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int J_b_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_b_release(int mem) {
}

CASADI_SYMBOL_EXPORT void J_b_incref(void) {
}

CASADI_SYMBOL_EXPORT void J_b_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int J_b_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int J_b_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real J_b_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_b_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_b_name_out(casadi_int i) {
  switch (i) {
    case 0: return "J_b";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_b_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_b_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int J_b_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
