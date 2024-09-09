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
  #define CASADI_PREFIX(ID) indy7_dualarm_dJ_s_ ## ID
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

/* dJ_s:(q[6],v[6])->(dJ_s[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a4, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  a1=-5.0001100036301360e-01;
  a2=-6.7116476578727269e-02;
  a3=arg[1]? arg[1][0] : 0;
  a4=(a1*a3);
  a5=(a2*a4);
  a6=-3.8750852528133553e-02;
  a7=-8.6601905262873902e-01;
  a8=(a7*a3);
  a9=(a6*a8);
  a5=(a5-a9);
  a9=(a1*a5);
  a9=(-a9);
  if (res[0]!=0) res[0][1]=a9;
  a5=(a7*a5);
  if (res[0]!=0) res[0][2]=a5;
  a8=(a1*a8);
  a4=(a7*a4);
  a8=(a8-a4);
  if (res[0]!=0) res[0][3]=a8;
  if (res[0]!=0) res[0][4]=a0;
  if (res[0]!=0) res[0][5]=a0;
  a0=-1.0900000000000000e-01;
  a8=8.6601905262873902e-01;
  a4=arg[0]? arg[0][0] : 0;
  a5=cos(a4);
  a9=(a8*a5);
  a10=(a0*a9);
  a11=-1.1100244208058901e-01;
  a10=(a10+a11);
  a6=(a6+a10);
  a10=2.2204460492503131e-16;
  a11=arg[0]? arg[0][1] : 0;
  a12=cos(a11);
  a13=(a10*a12);
  a11=sin(a11);
  a13=(a13+a11);
  a14=(a5*a13);
  a4=sin(a4);
  a15=(a10*a11);
  a16=(a4*a15);
  a14=(a14-a16);
  a16=(a10*a11);
  a16=(a16-a12);
  a17=(a16*a3);
  a18=(a14*a17);
  a19=(a10*a11);
  a19=(a12-a19);
  a20=(a5*a19);
  a21=(a10*a12);
  a22=(a4*a21);
  a20=(a20-a22);
  a12=(a10*a12);
  a11=(a11+a12);
  a12=(a11*a3);
  a22=(a20*a12);
  a23=(a10*a5);
  a23=(a23+a4);
  a24=arg[1]? arg[1][1] : 0;
  a25=(a23*a24);
  a22=(a22+a25);
  a18=(a18+a22);
  a22=(a6*a18);
  a25=(a0*a4);
  a8=(a8*a4);
  a26=(a8*a13);
  a27=(a9*a15);
  a28=(a1*a16);
  a27=(a27+a28);
  a26=(a26+a27);
  a27=(a26*a17);
  a28=(a8*a19);
  a29=(a9*a21);
  a30=(a1*a11);
  a29=(a29+a30);
  a28=(a28+a29);
  a29=(a28*a12);
  a8=(a10*a8);
  a8=(a8-a9);
  a9=(a8*a24);
  a29=(a29+a9);
  a27=(a27+a29);
  a29=(a25*a27);
  a22=(a22+a29);
  a4=(a1*a4);
  a29=(a4*a13);
  a1=(a1*a5);
  a15=(a1*a15);
  a16=(a7*a16);
  a15=(a15+a16);
  a29=(a29+a15);
  a3=(a0*a3);
  a13=(a13*a3);
  a15=(a29*a13);
  a16=(a4*a19);
  a21=(a1*a21);
  a7=(a7*a11);
  a21=(a21+a7);
  a16=(a16+a21);
  a19=(a19*a3);
  a21=(a16*a19);
  a4=(a10*a4);
  a4=(a4-a1);
  a3=(a10*a3);
  a7=(a4*a3);
  a21=(a21+a7);
  a15=(a15+a21);
  a22=(a22-a15);
  a15=(a22*a8);
  a21=(a26*a13);
  a7=(a28*a19);
  a11=(a8*a3);
  a7=(a7+a11);
  a21=(a21+a7);
  a7=(a29*a17);
  a11=(a16*a12);
  a5=(a4*a24);
  a11=(a11+a5);
  a7=(a7+a11);
  a11=(a25*a7);
  a0=(a0*a1);
  a1=-1.9225622968358005e-01;
  a0=(a0+a1);
  a2=(a2+a0);
  a0=(a2*a18);
  a11=(a11+a0);
  a21=(a21+a11);
  a11=(a21*a4);
  a15=(a15+a11);
  a11=(a25*a4);
  a0=(a2*a23);
  a11=(a11+a0);
  a0=(a7*a11);
  a1=(a6*a23);
  a5=(a25*a8);
  a1=(a1+a5);
  a5=(a27*a1);
  a0=(a0+a5);
  a15=(a15-a0);
  if (res[0]!=0) res[0][6]=a15;
  a15=(a2*a8);
  a0=(a6*a4);
  a15=(a15-a0);
  a0=(a27*a15);
  a11=(a18*a11);
  a0=(a0+a11);
  a21=(a21*a23);
  a11=(a2*a27);
  a5=(a6*a7);
  a11=(a11-a5);
  a5=(a14*a13);
  a9=(a20*a19);
  a30=(a23*a3);
  a9=(a9+a30);
  a5=(a5+a9);
  a11=(a11-a5);
  a5=(a11*a8);
  a21=(a21+a5);
  a0=(a0-a21);
  if (res[0]!=0) res[0][7]=a0;
  a11=(a11*a4);
  a22=(a22*a23);
  a11=(a11-a22);
  a1=(a18*a1);
  a15=(a7*a15);
  a1=(a1-a15);
  a11=(a11+a1);
  if (res[0]!=0) res[0][8]=a11;
  a11=(a7*a8);
  a1=(a27*a4);
  a11=(a11-a1);
  if (res[0]!=0) res[0][9]=a11;
  a27=(a27*a23);
  a11=(a18*a8);
  a27=(a27-a11);
  if (res[0]!=0) res[0][10]=a27;
  a18=(a18*a4);
  a7=(a7*a23);
  a18=(a18-a7);
  if (res[0]!=0) res[0][11]=a18;
  a18=arg[0]? arg[0][2] : 0;
  a7=cos(a18);
  a27=(a29*a7);
  a18=sin(a18);
  a11=(a16*a18);
  a27=(a27+a11);
  a11=-3.0499999999999999e-02;
  a1=(a11*a12);
  a1=(a1-a13);
  a13=(a7*a1);
  a15=(a11*a17);
  a22=-4.5000000000000001e-01;
  a0=(a22*a24);
  a15=(a15-a0);
  a19=(a19+a15);
  a15=(a18*a19);
  a13=(a13-a15);
  a15=(a27*a13);
  a16=(a16*a7);
  a0=(a29*a18);
  a16=(a16-a0);
  a1=(a18*a1);
  a19=(a7*a19);
  a1=(a1+a19);
  a19=(a16*a1);
  a0=(a22*a12);
  a3=(a3+a0);
  a0=(a4*a3);
  a19=(a19+a0);
  a15=(a15-a19);
  a19=(a22*a26);
  a0=(a11*a8);
  a19=(a19+a0);
  a6=(a6+a19);
  a19=(a14*a7);
  a0=(a20*a18);
  a19=(a19+a0);
  a0=(a7*a17);
  a21=(a18*a12);
  a0=(a0+a21);
  a21=(a19*a0);
  a20=(a20*a7);
  a5=(a14*a18);
  a20=(a20-a5);
  a12=(a7*a12);
  a17=(a18*a17);
  a12=(a12-a17);
  a17=(a20*a12);
  a5=arg[1]? arg[1][2] : 0;
  a5=(a5+a24);
  a24=(a23*a5);
  a17=(a17+a24);
  a21=(a21+a17);
  a17=(a6*a21);
  a14=(a22*a14);
  a24=(a11*a23);
  a14=(a14+a24);
  a14=(a14-a25);
  a25=(a26*a7);
  a24=(a28*a18);
  a25=(a25+a24);
  a24=(a25*a0);
  a28=(a28*a7);
  a26=(a26*a18);
  a28=(a28-a26);
  a26=(a28*a12);
  a18=(a8*a5);
  a26=(a26+a18);
  a24=(a24+a26);
  a26=(a14*a24);
  a17=(a17-a26);
  a15=(a15+a17);
  a17=(a15*a8);
  a26=(a25*a13);
  a18=(a28*a1);
  a7=(a8*a3);
  a18=(a18+a7);
  a26=(a26-a18);
  a18=(a27*a0);
  a7=(a16*a12);
  a9=(a4*a5);
  a7=(a7+a9);
  a18=(a18+a7);
  a7=(a14*a18);
  a22=(a22*a29);
  a11=(a11*a4);
  a22=(a22+a11);
  a2=(a2+a22);
  a22=(a2*a21);
  a7=(a7-a22);
  a26=(a26+a7);
  a7=(a26*a4);
  a17=(a17-a7);
  a7=(a14*a4);
  a22=(a2*a23);
  a7=(a7-a22);
  a22=(a18*a7);
  a11=(a6*a23);
  a29=(a14*a8);
  a11=(a11-a29);
  a29=(a24*a11);
  a22=(a22-a29);
  a17=(a17+a22);
  if (res[0]!=0) res[0][12]=a17;
  a26=(a26*a23);
  a17=(a19*a13);
  a22=(a20*a1);
  a29=(a23*a3);
  a22=(a22+a29);
  a17=(a17-a22);
  a22=(a2*a24);
  a29=(a6*a18);
  a22=(a22-a29);
  a17=(a17+a22);
  a22=(a17*a8);
  a26=(a26-a22);
  a22=(a2*a8);
  a29=(a6*a4);
  a22=(a22-a29);
  a29=(a24*a22);
  a7=(a21*a7);
  a29=(a29-a7);
  a26=(a26+a29);
  if (res[0]!=0) res[0][13]=a26;
  a17=(a17*a4);
  a15=(a15*a23);
  a17=(a17-a15);
  a11=(a21*a11);
  a22=(a18*a22);
  a11=(a11-a22);
  a17=(a17+a11);
  if (res[0]!=0) res[0][14]=a17;
  a17=(a18*a8);
  a11=(a24*a4);
  a17=(a17-a11);
  if (res[0]!=0) res[0][15]=a17;
  a24=(a24*a23);
  a17=(a21*a8);
  a24=(a24-a17);
  if (res[0]!=0) res[0][16]=a24;
  a21=(a21*a4);
  a18=(a18*a23);
  a21=(a21-a18);
  if (res[0]!=0) res[0][17]=a21;
  a21=arg[0]? arg[0][3] : 0;
  a18=cos(a21);
  a24=(a10*a18);
  a17=-2.2204460492503131e-16;
  a21=sin(a21);
  a11=(a17*a21);
  a24=(a24+a11);
  a11=(a27*a24);
  a22=(a16*a18);
  a15=(a4*a21);
  a22=(a22-a15);
  a11=(a11+a22);
  a22=-7.4999999999999997e-02;
  a15=(a22*a12);
  a13=(a13+a15);
  a15=(a24*a13);
  a26=-2.6700000000000002e-01;
  a29=(a26*a12);
  a3=(a3+a29);
  a29=(a21*a3);
  a7=(a22*a0);
  a9=(a26*a5);
  a7=(a7-a9);
  a1=(a1+a7);
  a7=(a18*a1);
  a29=(a29-a7);
  a15=(a15+a29);
  a29=(a11*a15);
  a7=(a17*a18);
  a9=(a10*a21);
  a7=(a7-a9);
  a9=(a27*a7);
  a30=(a16*a21);
  a31=(a4*a18);
  a30=(a30+a31);
  a9=(a9-a30);
  a30=(a7*a13);
  a31=(a21*a1);
  a32=(a18*a3);
  a31=(a31+a32);
  a30=(a30+a31);
  a31=(a9*a30);
  a16=(a10*a16);
  a32=(a10*a4);
  a16=(a16+a32);
  a16=(a16-a27);
  a1=(a10*a1);
  a3=(a10*a3);
  a1=(a1+a3);
  a13=(a13+a1);
  a1=(a16*a13);
  a31=(a31-a1);
  a29=(a29+a31);
  a31=(a26*a25);
  a1=(a22*a8);
  a31=(a31+a1);
  a6=(a6+a31);
  a31=(a19*a24);
  a1=(a20*a18);
  a3=(a23*a21);
  a1=(a1-a3);
  a31=(a31+a1);
  a1=(a24*a0);
  a3=(a18*a12);
  a32=(a21*a5);
  a3=(a3-a32);
  a1=(a1+a3);
  a3=(a31*a1);
  a32=(a19*a7);
  a33=(a20*a21);
  a34=(a23*a18);
  a33=(a33+a34);
  a32=(a32-a33);
  a33=(a7*a0);
  a34=(a21*a12);
  a35=(a18*a5);
  a34=(a34+a35);
  a33=(a33-a34);
  a34=(a32*a33);
  a20=(a10*a20);
  a35=(a10*a23);
  a20=(a20+a35);
  a20=(a20-a19);
  a35=arg[1]? arg[1][3] : 0;
  a12=(a10*a12);
  a5=(a10*a5);
  a12=(a12+a5);
  a12=(a12-a0);
  a35=(a35+a12);
  a12=(a20*a35);
  a34=(a34+a12);
  a3=(a3+a34);
  a34=(a6*a3);
  a19=(a26*a19);
  a23=(a22*a23);
  a19=(a19+a23);
  a14=(a14+a19);
  a24=(a25*a24);
  a19=(a28*a18);
  a23=(a8*a21);
  a19=(a19-a23);
  a24=(a24+a19);
  a19=(a24*a1);
  a7=(a25*a7);
  a21=(a28*a21);
  a18=(a8*a18);
  a21=(a21+a18);
  a7=(a7-a21);
  a21=(a7*a33);
  a28=(a10*a28);
  a8=(a10*a8);
  a28=(a28+a8);
  a28=(a28-a25);
  a25=(a28*a35);
  a21=(a21+a25);
  a19=(a19+a21);
  a21=(a14*a19);
  a34=(a34-a21);
  a29=(a29+a34);
  a34=(a29*a28);
  a21=(a24*a15);
  a25=(a7*a30);
  a8=(a28*a13);
  a25=(a25-a8);
  a21=(a21+a25);
  a25=(a11*a1);
  a8=(a9*a33);
  a18=(a16*a35);
  a8=(a8+a18);
  a25=(a25+a8);
  a8=(a14*a25);
  a26=(a26*a27);
  a22=(a22*a4);
  a26=(a26+a22);
  a2=(a2+a26);
  a26=(a2*a3);
  a8=(a8-a26);
  a21=(a21+a8);
  a8=(a21*a16);
  a34=(a34-a8);
  a8=(a14*a16);
  a26=(a2*a20);
  a8=(a8-a26);
  a26=(a25*a8);
  a22=(a6*a20);
  a4=(a14*a28);
  a22=(a22-a4);
  a4=(a19*a22);
  a26=(a26-a4);
  a34=(a34+a26);
  if (res[0]!=0) res[0][18]=a34;
  a21=(a21*a20);
  a34=(a31*a15);
  a26=(a32*a30);
  a4=(a20*a13);
  a26=(a26-a4);
  a34=(a34+a26);
  a26=(a2*a19);
  a4=(a6*a25);
  a26=(a26-a4);
  a34=(a34+a26);
  a26=(a34*a28);
  a21=(a21-a26);
  a26=(a2*a28);
  a4=(a6*a16);
  a26=(a26-a4);
  a4=(a19*a26);
  a8=(a3*a8);
  a4=(a4-a8);
  a21=(a21+a4);
  if (res[0]!=0) res[0][19]=a21;
  a34=(a34*a16);
  a29=(a29*a20);
  a34=(a34-a29);
  a22=(a3*a22);
  a26=(a25*a26);
  a22=(a22-a26);
  a34=(a34+a22);
  if (res[0]!=0) res[0][20]=a34;
  a34=(a25*a28);
  a22=(a19*a16);
  a34=(a34-a22);
  if (res[0]!=0) res[0][21]=a34;
  a19=(a19*a20);
  a34=(a3*a28);
  a19=(a19-a34);
  if (res[0]!=0) res[0][22]=a19;
  a3=(a3*a16);
  a25=(a25*a20);
  a3=(a3-a25);
  if (res[0]!=0) res[0][23]=a3;
  a3=arg[0]? arg[0][4] : 0;
  a25=cos(a3);
  a19=(a10*a25);
  a3=sin(a3);
  a19=(a19+a3);
  a34=(a11*a19);
  a22=(a10*a3);
  a26=(a9*a22);
  a29=(a10*a3);
  a29=(a29-a25);
  a21=(a16*a29);
  a26=(a26+a21);
  a34=(a34+a26);
  a26=-1.1400000000000000e-01;
  a21=(a26*a35);
  a4=8.3000000000000004e-02;
  a8=(a4*a33);
  a21=(a21-a8);
  a15=(a15-a21);
  a21=(a19*a15);
  a8=(a4*a1);
  a30=(a30-a8);
  a8=(a22*a30);
  a27=(a26*a1);
  a27=(a27-a13);
  a13=(a29*a27);
  a8=(a8+a13);
  a21=(a21+a8);
  a8=(a34*a21);
  a13=(a10*a3);
  a13=(a25-a13);
  a18=(a11*a13);
  a23=(a10*a25);
  a12=(a9*a23);
  a25=(a10*a25);
  a3=(a3+a25);
  a25=(a16*a3);
  a12=(a12+a25);
  a18=(a18+a12);
  a12=(a13*a15);
  a25=(a23*a30);
  a27=(a3*a27);
  a25=(a25+a27);
  a12=(a12+a25);
  a25=(a18*a12);
  a11=(a10*a11);
  a11=(a11-a9);
  a15=(a10*a15);
  a15=(a15-a30);
  a30=(a11*a15);
  a25=(a25+a30);
  a8=(a8+a25);
  a25=(a26*a7);
  a30=(a4*a28);
  a25=(a25+a30);
  a6=(a6+a25);
  a25=(a31*a19);
  a30=(a32*a22);
  a27=(a20*a29);
  a30=(a30+a27);
  a25=(a25+a30);
  a30=(a19*a1);
  a27=(a22*a33);
  a0=(a29*a35);
  a27=(a27+a0);
  a30=(a30+a27);
  a27=(a25*a30);
  a0=(a31*a13);
  a5=(a32*a23);
  a36=(a20*a3);
  a5=(a5+a36);
  a0=(a0+a5);
  a5=(a13*a1);
  a36=(a23*a33);
  a35=(a3*a35);
  a36=(a36+a35);
  a5=(a5+a36);
  a36=(a0*a5);
  a31=(a10*a31);
  a31=(a31-a32);
  a35=arg[1]? arg[1][4] : 0;
  a1=(a10*a1);
  a1=(a1-a33);
  a35=(a35+a1);
  a1=(a31*a35);
  a36=(a36+a1);
  a27=(a27+a36);
  a36=(a6*a27);
  a32=(a26*a32);
  a20=(a4*a20);
  a32=(a32+a20);
  a14=(a14+a32);
  a19=(a24*a19);
  a22=(a7*a22);
  a29=(a28*a29);
  a22=(a22+a29);
  a19=(a19+a22);
  a22=(a19*a30);
  a13=(a24*a13);
  a23=(a7*a23);
  a28=(a28*a3);
  a23=(a23+a28);
  a13=(a13+a23);
  a23=(a13*a5);
  a24=(a10*a24);
  a24=(a24-a7);
  a7=(a24*a35);
  a23=(a23+a7);
  a22=(a22+a23);
  a23=(a14*a22);
  a36=(a36-a23);
  a8=(a8+a36);
  a36=(a8*a24);
  a23=(a19*a21);
  a7=(a13*a12);
  a28=(a24*a15);
  a7=(a7+a28);
  a23=(a23+a7);
  a7=(a34*a30);
  a28=(a18*a5);
  a3=(a11*a35);
  a28=(a28+a3);
  a7=(a7+a28);
  a28=(a14*a7);
  a26=(a26*a9);
  a4=(a4*a16);
  a26=(a26+a4);
  a2=(a2+a26);
  a26=(a2*a27);
  a28=(a28-a26);
  a23=(a23+a28);
  a28=(a23*a11);
  a36=(a36-a28);
  a28=(a14*a11);
  a26=(a2*a31);
  a28=(a28-a26);
  a26=(a7*a28);
  a4=(a6*a31);
  a16=(a14*a24);
  a4=(a4-a16);
  a16=(a22*a4);
  a26=(a26-a16);
  a36=(a36+a26);
  if (res[0]!=0) res[0][24]=a36;
  a23=(a23*a31);
  a36=(a25*a21);
  a26=(a0*a12);
  a16=(a31*a15);
  a26=(a26+a16);
  a36=(a36+a26);
  a26=(a2*a22);
  a16=(a6*a7);
  a26=(a26-a16);
  a36=(a36+a26);
  a26=(a36*a24);
  a23=(a23-a26);
  a26=(a2*a24);
  a16=(a6*a11);
  a26=(a26-a16);
  a16=(a22*a26);
  a28=(a27*a28);
  a16=(a16-a28);
  a23=(a23+a16);
  if (res[0]!=0) res[0][25]=a23;
  a36=(a36*a11);
  a8=(a8*a31);
  a36=(a36-a8);
  a4=(a27*a4);
  a26=(a7*a26);
  a4=(a4-a26);
  a36=(a36+a4);
  if (res[0]!=0) res[0][26]=a36;
  a36=(a7*a24);
  a4=(a22*a11);
  a36=(a36-a4);
  if (res[0]!=0) res[0][27]=a36;
  a22=(a22*a31);
  a36=(a27*a24);
  a22=(a22-a36);
  if (res[0]!=0) res[0][28]=a22;
  a27=(a27*a11);
  a7=(a7*a31);
  a27=(a27-a7);
  if (res[0]!=0) res[0][29]=a27;
  a27=arg[0]? arg[0][5] : 0;
  a7=cos(a27);
  a22=(a10*a7);
  a27=sin(a27);
  a36=(a17*a27);
  a22=(a22+a36);
  a36=(a34*a22);
  a4=(a18*a7);
  a26=(a11*a27);
  a4=(a4-a26);
  a36=(a36+a4);
  a4=6.9000000000000006e-02;
  a26=(a4*a5);
  a21=(a21+a26);
  a26=(a22*a21);
  a8=(a4*a30);
  a23=-1.6800000000000001e-01;
  a16=(a23*a35);
  a8=(a8-a16);
  a12=(a12-a8);
  a8=(a7*a12);
  a16=(a23*a5);
  a15=(a15-a16);
  a16=(a27*a15);
  a8=(a8-a16);
  a26=(a26+a8);
  a8=(a36*a26);
  a17=(a17*a7);
  a16=(a10*a27);
  a17=(a17-a16);
  a16=(a34*a17);
  a28=(a18*a27);
  a9=(a11*a7);
  a28=(a28+a9);
  a16=(a16-a28);
  a28=(a17*a21);
  a9=(a27*a12);
  a3=(a7*a15);
  a9=(a9+a3);
  a28=(a28-a9);
  a9=(a16*a28);
  a18=(a10*a18);
  a3=(a10*a11);
  a18=(a18+a3);
  a18=(a18-a34);
  a12=(a10*a12);
  a15=(a10*a15);
  a12=(a12+a15);
  a12=(a12-a21);
  a21=(a18*a12);
  a9=(a9+a21);
  a8=(a8+a9);
  a9=(a23*a19);
  a21=(a4*a24);
  a9=(a9+a21);
  a6=(a6+a9);
  a9=(a25*a22);
  a21=(a0*a7);
  a15=(a31*a27);
  a21=(a21-a15);
  a9=(a9+a21);
  a21=(a22*a30);
  a15=(a7*a5);
  a3=(a27*a35);
  a15=(a15-a3);
  a21=(a21+a15);
  a15=(a9*a21);
  a3=(a25*a17);
  a29=(a0*a27);
  a32=(a31*a7);
  a29=(a29+a32);
  a3=(a3-a29);
  a29=(a17*a30);
  a32=(a27*a5);
  a20=(a7*a35);
  a32=(a32+a20);
  a29=(a29-a32);
  a32=(a3*a29);
  a0=(a10*a0);
  a20=(a10*a31);
  a0=(a0+a20);
  a0=(a0-a25);
  a20=arg[1]? arg[1][5] : 0;
  a5=(a10*a5);
  a35=(a10*a35);
  a5=(a5+a35);
  a5=(a5-a30);
  a20=(a20+a5);
  a5=(a0*a20);
  a32=(a32+a5);
  a15=(a15+a32);
  a32=(a6*a15);
  a25=(a23*a25);
  a31=(a4*a31);
  a25=(a25+a31);
  a14=(a14+a25);
  a22=(a19*a22);
  a25=(a13*a7);
  a31=(a24*a27);
  a25=(a25-a31);
  a22=(a22+a25);
  a25=(a22*a21);
  a17=(a19*a17);
  a27=(a13*a27);
  a7=(a24*a7);
  a27=(a27+a7);
  a17=(a17-a27);
  a27=(a17*a29);
  a13=(a10*a13);
  a10=(a10*a24);
  a13=(a13+a10);
  a13=(a13-a19);
  a19=(a13*a20);
  a27=(a27+a19);
  a25=(a25+a27);
  a27=(a14*a25);
  a32=(a32-a27);
  a8=(a8+a32);
  a32=(a8*a13);
  a22=(a22*a26);
  a17=(a17*a28);
  a27=(a13*a12);
  a17=(a17+a27);
  a22=(a22+a17);
  a36=(a36*a21);
  a16=(a16*a29);
  a20=(a18*a20);
  a16=(a16+a20);
  a36=(a36+a16);
  a16=(a14*a36);
  a23=(a23*a34);
  a4=(a4*a11);
  a23=(a23+a4);
  a2=(a2+a23);
  a23=(a2*a15);
  a16=(a16-a23);
  a22=(a22+a16);
  a16=(a22*a18);
  a32=(a32-a16);
  a16=(a14*a18);
  a23=(a2*a0);
  a16=(a16-a23);
  a23=(a36*a16);
  a4=(a6*a0);
  a14=(a14*a13);
  a4=(a4-a14);
  a14=(a25*a4);
  a23=(a23-a14);
  a32=(a32+a23);
  if (res[0]!=0) res[0][30]=a32;
  a22=(a22*a0);
  a9=(a9*a26);
  a3=(a3*a28);
  a12=(a0*a12);
  a3=(a3+a12);
  a9=(a9+a3);
  a3=(a2*a25);
  a12=(a6*a36);
  a3=(a3-a12);
  a9=(a9+a3);
  a3=(a9*a13);
  a22=(a22-a3);
  a2=(a2*a13);
  a6=(a6*a18);
  a2=(a2-a6);
  a6=(a25*a2);
  a16=(a15*a16);
  a6=(a6-a16);
  a22=(a22+a6);
  if (res[0]!=0) res[0][31]=a22;
  a9=(a9*a18);
  a8=(a8*a0);
  a9=(a9-a8);
  a4=(a15*a4);
  a2=(a36*a2);
  a4=(a4-a2);
  a9=(a9+a4);
  if (res[0]!=0) res[0][32]=a9;
  a9=(a36*a13);
  a4=(a25*a18);
  a9=(a9-a4);
  if (res[0]!=0) res[0][33]=a9;
  a25=(a25*a0);
  a13=(a15*a13);
  a25=(a25-a13);
  if (res[0]!=0) res[0][34]=a25;
  a15=(a15*a18);
  a36=(a36*a0);
  a15=(a15-a36);
  if (res[0]!=0) res[0][35]=a15;
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_s(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int dJ_s_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_s_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_s_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int dJ_s_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_s_release(int mem) {
}

CASADI_SYMBOL_EXPORT void dJ_s_incref(void) {
}

CASADI_SYMBOL_EXPORT void dJ_s_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int dJ_s_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int dJ_s_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real dJ_s_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_s_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "v";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_s_name_out(casadi_int i) {
  switch (i) {
    case 0: return "dJ_s";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_s_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_s_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int dJ_s_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
