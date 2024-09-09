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
  #define CASADI_PREFIX(ID) indy7_dualarm_dJ_b_ ## ID
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

/* dJ_b:(q[6],v[6])->(dJ_b[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95;
  a0=8.6601905262873902e-01;
  a1=arg[0]? arg[0][0] : 0;
  a2=sin(a1);
  a3=(a0*a2);
  a4=2.2204460492503131e-16;
  a5=arg[0]? arg[0][1] : 0;
  a6=cos(a5);
  a7=(a4*a6);
  a5=sin(a5);
  a7=(a7+a5);
  a8=(a3*a7);
  a1=cos(a1);
  a0=(a0*a1);
  a9=(a4*a5);
  a10=(a0*a9);
  a11=-5.0001100036301360e-01;
  a12=(a4*a5);
  a12=(a12-a6);
  a13=(a11*a12);
  a10=(a10+a13);
  a8=(a8+a10);
  a10=arg[0]? arg[0][2] : 0;
  a13=cos(a10);
  a14=(a8*a13);
  a15=(a4*a5);
  a15=(a6-a15);
  a16=(a3*a15);
  a17=(a4*a6);
  a18=(a0*a17);
  a6=(a4*a6);
  a5=(a5+a6);
  a6=(a11*a5);
  a18=(a18+a6);
  a16=(a16+a18);
  a10=sin(a10);
  a18=(a16*a10);
  a14=(a14+a18);
  a18=arg[0]? arg[0][3] : 0;
  a6=cos(a18);
  a19=(a4*a6);
  a20=-2.2204460492503131e-16;
  a18=sin(a18);
  a21=(a20*a18);
  a19=(a19+a21);
  a21=(a14*a19);
  a22=(a16*a13);
  a23=(a8*a10);
  a22=(a22-a23);
  a23=(a22*a6);
  a3=(a4*a3);
  a3=(a3-a0);
  a24=(a3*a18);
  a23=(a23-a24);
  a21=(a21+a23);
  a23=arg[0]? arg[0][4] : 0;
  a24=cos(a23);
  a25=(a4*a24);
  a23=sin(a23);
  a25=(a25+a23);
  a26=(a21*a25);
  a27=(a20*a6);
  a28=(a4*a18);
  a27=(a27-a28);
  a28=(a14*a27);
  a29=(a22*a18);
  a30=(a3*a6);
  a29=(a29+a30);
  a28=(a28-a29);
  a29=(a4*a23);
  a30=(a28*a29);
  a31=(a4*a22);
  a32=(a4*a3);
  a31=(a31+a32);
  a31=(a31-a14);
  a32=(a4*a23);
  a32=(a32-a24);
  a33=(a31*a32);
  a30=(a30+a33);
  a26=(a26+a30);
  a30=arg[0]? arg[0][5] : 0;
  a33=cos(a30);
  a34=(a4*a33);
  a30=sin(a30);
  a35=(a20*a30);
  a34=(a34+a35);
  a35=(a26*a34);
  a36=(a4*a23);
  a36=(a24-a36);
  a37=(a21*a36);
  a38=(a4*a24);
  a39=(a28*a38);
  a24=(a4*a24);
  a23=(a23+a24);
  a24=(a31*a23);
  a39=(a39+a24);
  a37=(a37+a39);
  a39=(a37*a33);
  a24=(a4*a21);
  a24=(a24-a28);
  a40=(a24*a30);
  a39=(a39-a40);
  a35=(a35+a39);
  a39=-8.6601905262873902e-01;
  a40=-6.7116476578727269e-02;
  a41=arg[1]? arg[1][0] : 0;
  a42=(a11*a41);
  a43=(a40*a42);
  a44=-3.8750852528133553e-02;
  a45=(a39*a41);
  a46=(a44*a45);
  a43=(a43-a46);
  a46=(a39*a43);
  a47=-1.0900000000000000e-01;
  a48=(a11*a1);
  a49=(a47*a48);
  a50=-1.9225622968358005e-01;
  a49=(a49+a50);
  a40=(a40+a49);
  a49=-4.5000000000000001e-01;
  a50=(a11*a2);
  a51=(a50*a7);
  a52=(a48*a9);
  a53=(a39*a12);
  a52=(a52+a53);
  a51=(a51+a52);
  a52=(a49*a51);
  a53=-3.0499999999999999e-02;
  a54=(a4*a50);
  a54=(a54-a48);
  a55=(a53*a54);
  a52=(a52+a55);
  a52=(a40+a52);
  a55=-2.6700000000000002e-01;
  a56=(a51*a13);
  a50=(a50*a15);
  a48=(a48*a17);
  a57=(a39*a5);
  a48=(a48+a57);
  a50=(a50+a48);
  a48=(a50*a10);
  a56=(a56+a48);
  a48=(a55*a56);
  a57=-7.4999999999999997e-02;
  a58=(a57*a54);
  a48=(a48+a58);
  a48=(a52+a48);
  a58=-1.1400000000000000e-01;
  a59=(a56*a27);
  a60=(a50*a13);
  a61=(a51*a10);
  a60=(a60-a61);
  a61=(a60*a18);
  a62=(a54*a6);
  a61=(a61+a62);
  a59=(a59-a61);
  a61=(a58*a59);
  a62=8.3000000000000004e-02;
  a63=(a4*a60);
  a64=(a4*a54);
  a63=(a63+a64);
  a63=(a63-a56);
  a64=(a62*a63);
  a61=(a61+a64);
  a61=(a48+a61);
  a64=-1.6800000000000001e-01;
  a65=(a56*a19);
  a66=(a60*a6);
  a67=(a54*a18);
  a66=(a66-a67);
  a65=(a65+a66);
  a66=(a65*a25);
  a67=(a59*a29);
  a68=(a63*a32);
  a67=(a67+a68);
  a66=(a66+a67);
  a67=(a64*a66);
  a68=6.9000000000000006e-02;
  a69=(a4*a65);
  a69=(a69-a59);
  a70=(a68*a69);
  a67=(a67+a70);
  a67=(a61+a67);
  a70=2.3000000000000001e-01;
  a71=(a65*a36);
  a72=(a59*a38);
  a73=(a63*a23);
  a72=(a72+a73);
  a71=(a71+a72);
  a72=(a4*a71);
  a73=(a4*a69);
  a72=(a72+a73);
  a72=(a72-a66);
  a73=(a70*a72);
  a73=(a67+a73);
  a45=(a11*a45);
  a39=(a39*a42);
  a45=(a45-a39);
  a39=(a73*a45);
  a46=(a46+a39);
  a39=(a35*a46);
  a42=(a66*a34);
  a74=(a71*a33);
  a75=(a69*a30);
  a74=(a74-a75);
  a42=(a42+a74);
  a11=(a11*a43);
  a0=(a47*a0);
  a43=-1.1100244208058901e-01;
  a0=(a0+a43);
  a44=(a44+a0);
  a0=(a49*a8);
  a43=(a53*a3);
  a0=(a0+a43);
  a0=(a44+a0);
  a43=(a55*a14);
  a74=(a57*a3);
  a43=(a43+a74);
  a43=(a0+a43);
  a74=(a58*a28);
  a75=(a62*a31);
  a74=(a74+a75);
  a74=(a43+a74);
  a75=(a64*a26);
  a76=(a68*a24);
  a75=(a75+a76);
  a75=(a74+a75);
  a76=(a4*a37);
  a77=(a4*a24);
  a76=(a76+a77);
  a76=(a76-a26);
  a77=(a70*a76);
  a77=(a75+a77);
  a78=(a77*a45);
  a11=(a11+a78);
  a78=(a42*a11);
  a39=(a39-a78);
  if (res[0]!=0) res[0][0]=a39;
  a20=(a20*a33);
  a39=(a4*a30);
  a20=(a20-a39);
  a39=(a26*a20);
  a78=(a37*a30);
  a79=(a24*a33);
  a78=(a78+a79);
  a39=(a39-a78);
  a78=(a39*a46);
  a79=(a66*a20);
  a80=(a71*a30);
  a81=(a69*a33);
  a80=(a80+a81);
  a79=(a79-a80);
  a80=(a79*a11);
  a78=(a78-a80);
  if (res[0]!=0) res[0][1]=a78;
  a46=(a76*a46);
  a11=(a72*a11);
  a46=(a46-a11);
  if (res[0]!=0) res[0][2]=a46;
  a46=(a1*a7);
  a9=(a2*a9);
  a46=(a46-a9);
  a9=(a46*a13);
  a11=(a1*a15);
  a17=(a2*a17);
  a11=(a11-a17);
  a17=(a11*a10);
  a9=(a9+a17);
  a17=(a9*a19);
  a78=(a11*a13);
  a80=(a46*a10);
  a78=(a78-a80);
  a80=(a78*a6);
  a1=(a4*a1);
  a1=(a1+a2);
  a81=(a1*a18);
  a80=(a80-a81);
  a17=(a17+a80);
  a80=(a17*a25);
  a81=(a9*a27);
  a82=(a78*a18);
  a83=(a1*a6);
  a82=(a82+a83);
  a81=(a81-a82);
  a82=(a81*a29);
  a83=(a4*a78);
  a84=(a4*a1);
  a83=(a83+a84);
  a83=(a83-a9);
  a84=(a83*a32);
  a82=(a82+a84);
  a80=(a80+a82);
  a82=(a80*a34);
  a84=(a17*a36);
  a85=(a81*a38);
  a86=(a83*a23);
  a85=(a85+a86);
  a84=(a84+a85);
  a85=(a84*a33);
  a86=(a4*a17);
  a86=(a86-a81);
  a87=(a86*a30);
  a85=(a85-a87);
  a82=(a82+a85);
  a85=(a82*a45);
  if (res[0]!=0) res[0][3]=a85;
  a85=(a80*a20);
  a87=(a84*a30);
  a88=(a86*a33);
  a87=(a87+a88);
  a85=(a85-a87);
  a87=(a85*a45);
  if (res[0]!=0) res[0][4]=a87;
  a87=(a4*a84);
  a88=(a4*a86);
  a87=(a87+a88);
  a87=(a87-a80);
  a45=(a87*a45);
  if (res[0]!=0) res[0][5]=a45;
  a12=(a12*a41);
  a45=(a46*a12);
  a5=(a5*a41);
  a88=(a11*a5);
  a89=arg[1]? arg[1][1] : 0;
  a90=(a1*a89);
  a88=(a88+a90);
  a45=(a45+a88);
  a88=(a44*a45);
  a2=(a47*a2);
  a90=(a8*a12);
  a91=(a16*a5);
  a92=(a3*a89);
  a91=(a91+a92);
  a90=(a90+a91);
  a91=(a2*a90);
  a88=(a88+a91);
  a47=(a47*a41);
  a7=(a7*a47);
  a41=(a51*a7);
  a15=(a15*a47);
  a91=(a50*a15);
  a47=(a4*a47);
  a92=(a54*a47);
  a91=(a91+a92);
  a41=(a41+a91);
  a88=(a88-a41);
  a41=(a88*a3);
  a8=(a8*a7);
  a16=(a16*a15);
  a91=(a3*a47);
  a16=(a16+a91);
  a8=(a8+a16);
  a51=(a51*a12);
  a50=(a50*a5);
  a16=(a54*a89);
  a50=(a50+a16);
  a51=(a51+a50);
  a50=(a2*a51);
  a16=(a40*a45);
  a50=(a50+a16);
  a8=(a8+a50);
  a50=(a8*a54);
  a41=(a41+a50);
  a50=(a2*a54);
  a16=(a40*a1);
  a50=(a50+a16);
  a16=(a51*a50);
  a91=(a44*a1);
  a92=(a2*a3);
  a91=(a91+a92);
  a92=(a90*a91);
  a16=(a16+a92);
  a41=(a41-a16);
  a16=(a45*a54);
  a92=(a51*a1);
  a16=(a16-a92);
  a92=(a73*a16);
  a93=(a90*a1);
  a94=(a45*a3);
  a93=(a93-a94);
  a94=(a77*a93);
  a92=(a92-a94);
  a41=(a41-a92);
  a92=(a82*a41);
  a94=(a40*a3);
  a95=(a44*a54);
  a94=(a94-a95);
  a95=(a90*a94);
  a50=(a45*a50);
  a95=(a95+a50);
  a8=(a8*a1);
  a40=(a40*a90);
  a44=(a44*a51);
  a40=(a40-a44);
  a44=(a46*a7);
  a11=(a11*a15);
  a50=(a1*a47);
  a11=(a11+a50);
  a44=(a44+a11);
  a40=(a40-a44);
  a44=(a40*a3);
  a8=(a8+a44);
  a95=(a95-a8);
  a8=(a51*a3);
  a90=(a90*a54);
  a8=(a8-a90);
  a90=(a77*a8);
  a46=(a49*a46);
  a44=(a53*a1);
  a46=(a46+a44);
  a46=(a46-a2);
  a2=(a55*a9);
  a44=(a57*a1);
  a2=(a2+a44);
  a2=(a46+a2);
  a44=(a58*a81);
  a11=(a62*a83);
  a44=(a44+a11);
  a44=(a2+a44);
  a11=(a64*a80);
  a50=(a68*a86);
  a11=(a11+a50);
  a11=(a44+a11);
  a70=(a70*a87);
  a70=(a11+a70);
  a50=(a70*a16);
  a90=(a90-a50);
  a95=(a95-a90);
  a90=(a42*a95);
  a40=(a40*a54);
  a88=(a88*a1);
  a40=(a40-a88);
  a45=(a45*a91);
  a51=(a51*a94);
  a45=(a45-a51);
  a40=(a40+a45);
  a45=(a70*a93);
  a51=(a73*a8);
  a45=(a45-a51);
  a40=(a40-a45);
  a45=(a35*a40);
  a90=(a90+a45);
  a92=(a92+a90);
  if (res[0]!=0) res[0][6]=a92;
  a92=(a85*a41);
  a90=(a79*a95);
  a45=(a39*a40);
  a90=(a90+a45);
  a92=(a92+a90);
  if (res[0]!=0) res[0][7]=a92;
  a41=(a87*a41);
  a95=(a72*a95);
  a40=(a76*a40);
  a95=(a95+a40);
  a41=(a41+a95);
  if (res[0]!=0) res[0][8]=a41;
  a41=(a82*a8);
  a95=(a42*a93);
  a40=(a35*a16);
  a95=(a95+a40);
  a41=(a41+a95);
  if (res[0]!=0) res[0][9]=a41;
  a41=(a85*a8);
  a95=(a79*a93);
  a40=(a39*a16);
  a95=(a95+a40);
  a41=(a41+a95);
  if (res[0]!=0) res[0][10]=a41;
  a8=(a87*a8);
  a93=(a72*a93);
  a16=(a76*a16);
  a93=(a93+a16);
  a8=(a8+a93);
  if (res[0]!=0) res[0][11]=a8;
  a8=(a53*a5);
  a8=(a8-a7);
  a7=(a13*a8);
  a53=(a53*a12);
  a93=(a49*a89);
  a53=(a53-a93);
  a15=(a15+a53);
  a53=(a10*a15);
  a7=(a7-a53);
  a53=(a56*a7);
  a8=(a10*a8);
  a15=(a13*a15);
  a8=(a8+a15);
  a15=(a60*a8);
  a49=(a49*a5);
  a47=(a47+a49);
  a49=(a54*a47);
  a15=(a15+a49);
  a53=(a53-a15);
  a15=(a13*a12);
  a49=(a10*a5);
  a15=(a15+a49);
  a49=(a9*a15);
  a13=(a13*a5);
  a10=(a10*a12);
  a13=(a13-a10);
  a10=(a78*a13);
  a12=arg[1]? arg[1][2] : 0;
  a12=(a12+a89);
  a89=(a1*a12);
  a10=(a10+a89);
  a49=(a49+a10);
  a10=(a0*a49);
  a89=(a14*a15);
  a5=(a22*a13);
  a93=(a3*a12);
  a5=(a5+a93);
  a89=(a89+a5);
  a5=(a46*a89);
  a10=(a10-a5);
  a53=(a53+a10);
  a10=(a53*a3);
  a14=(a14*a7);
  a22=(a22*a8);
  a5=(a3*a47);
  a22=(a22+a5);
  a14=(a14-a22);
  a56=(a56*a15);
  a60=(a60*a13);
  a22=(a54*a12);
  a60=(a60+a22);
  a56=(a56+a60);
  a60=(a46*a56);
  a22=(a52*a49);
  a60=(a60-a22);
  a14=(a14+a60);
  a60=(a14*a54);
  a10=(a10-a60);
  a60=(a46*a54);
  a22=(a52*a1);
  a60=(a60-a22);
  a22=(a56*a60);
  a5=(a0*a1);
  a46=(a46*a3);
  a5=(a5-a46);
  a46=(a89*a5);
  a22=(a22-a46);
  a10=(a10+a22);
  a22=(a49*a54);
  a46=(a56*a1);
  a22=(a22-a46);
  a46=(a73*a22);
  a93=(a89*a1);
  a16=(a49*a3);
  a93=(a93-a16);
  a16=(a77*a93);
  a46=(a46-a16);
  a10=(a10-a46);
  a46=(a82*a10);
  a14=(a14*a1);
  a9=(a9*a7);
  a78=(a78*a8);
  a16=(a1*a47);
  a78=(a78+a16);
  a9=(a9-a78);
  a78=(a52*a89);
  a16=(a0*a56);
  a78=(a78-a16);
  a9=(a9+a78);
  a78=(a9*a3);
  a14=(a14-a78);
  a52=(a52*a3);
  a0=(a0*a54);
  a52=(a52-a0);
  a0=(a89*a52);
  a60=(a49*a60);
  a0=(a0-a60);
  a14=(a14+a0);
  a3=(a56*a3);
  a89=(a89*a54);
  a3=(a3-a89);
  a89=(a77*a3);
  a0=(a70*a22);
  a89=(a89-a0);
  a14=(a14-a89);
  a89=(a42*a14);
  a9=(a9*a54);
  a53=(a53*a1);
  a9=(a9-a53);
  a49=(a49*a5);
  a56=(a56*a52);
  a49=(a49-a56);
  a9=(a9+a49);
  a49=(a70*a93);
  a56=(a73*a3);
  a49=(a49-a56);
  a9=(a9-a49);
  a49=(a35*a9);
  a89=(a89+a49);
  a46=(a46+a89);
  if (res[0]!=0) res[0][12]=a46;
  a46=(a85*a10);
  a89=(a79*a14);
  a49=(a39*a9);
  a89=(a89+a49);
  a46=(a46+a89);
  if (res[0]!=0) res[0][13]=a46;
  a10=(a87*a10);
  a14=(a72*a14);
  a9=(a76*a9);
  a14=(a14+a9);
  a10=(a10+a14);
  if (res[0]!=0) res[0][14]=a10;
  a10=(a82*a3);
  a14=(a42*a93);
  a9=(a35*a22);
  a14=(a14+a9);
  a10=(a10+a14);
  if (res[0]!=0) res[0][15]=a10;
  a10=(a85*a3);
  a14=(a79*a93);
  a9=(a39*a22);
  a14=(a14+a9);
  a10=(a10+a14);
  if (res[0]!=0) res[0][16]=a10;
  a3=(a87*a3);
  a93=(a72*a93);
  a22=(a76*a22);
  a93=(a93+a22);
  a3=(a3+a93);
  if (res[0]!=0) res[0][17]=a3;
  a3=(a57*a13);
  a7=(a7+a3);
  a3=(a19*a7);
  a93=(a55*a13);
  a47=(a47+a93);
  a93=(a18*a47);
  a57=(a57*a15);
  a55=(a55*a12);
  a57=(a57-a55);
  a8=(a8+a57);
  a57=(a6*a8);
  a93=(a93-a57);
  a3=(a3+a93);
  a93=(a65*a3);
  a57=(a27*a7);
  a55=(a18*a8);
  a22=(a6*a47);
  a55=(a55+a22);
  a57=(a57+a55);
  a55=(a59*a57);
  a8=(a4*a8);
  a47=(a4*a47);
  a8=(a8+a47);
  a7=(a7+a8);
  a8=(a63*a7);
  a55=(a55-a8);
  a93=(a93+a55);
  a19=(a19*a15);
  a55=(a6*a13);
  a8=(a18*a12);
  a55=(a55-a8);
  a19=(a19+a55);
  a55=(a17*a19);
  a27=(a27*a15);
  a18=(a18*a13);
  a6=(a6*a12);
  a18=(a18+a6);
  a27=(a27-a18);
  a18=(a81*a27);
  a6=arg[1]? arg[1][3] : 0;
  a13=(a4*a13);
  a12=(a4*a12);
  a13=(a13+a12);
  a13=(a13-a15);
  a6=(a6+a13);
  a13=(a83*a6);
  a18=(a18+a13);
  a55=(a55+a18);
  a18=(a43*a55);
  a13=(a21*a19);
  a15=(a28*a27);
  a12=(a31*a6);
  a15=(a15+a12);
  a13=(a13+a15);
  a15=(a2*a13);
  a18=(a18-a15);
  a93=(a93+a18);
  a18=(a93*a31);
  a21=(a21*a3);
  a28=(a28*a57);
  a15=(a31*a7);
  a28=(a28-a15);
  a21=(a21+a28);
  a65=(a65*a19);
  a59=(a59*a27);
  a28=(a63*a6);
  a59=(a59+a28);
  a65=(a65+a59);
  a59=(a2*a65);
  a28=(a48*a55);
  a59=(a59-a28);
  a21=(a21+a59);
  a59=(a21*a63);
  a18=(a18-a59);
  a59=(a2*a63);
  a28=(a48*a83);
  a59=(a59-a28);
  a28=(a65*a59);
  a15=(a43*a83);
  a2=(a2*a31);
  a15=(a15-a2);
  a2=(a13*a15);
  a28=(a28-a2);
  a18=(a18+a28);
  a28=(a55*a63);
  a2=(a65*a83);
  a28=(a28-a2);
  a2=(a73*a28);
  a12=(a13*a83);
  a8=(a55*a31);
  a12=(a12-a8);
  a8=(a77*a12);
  a2=(a2-a8);
  a18=(a18-a2);
  a2=(a82*a18);
  a21=(a21*a83);
  a17=(a17*a3);
  a81=(a81*a57);
  a8=(a83*a7);
  a81=(a81-a8);
  a17=(a17+a81);
  a81=(a48*a13);
  a8=(a43*a65);
  a81=(a81-a8);
  a17=(a17+a81);
  a81=(a17*a31);
  a21=(a21-a81);
  a48=(a48*a31);
  a43=(a43*a63);
  a48=(a48-a43);
  a43=(a13*a48);
  a59=(a55*a59);
  a43=(a43-a59);
  a21=(a21+a43);
  a31=(a65*a31);
  a13=(a13*a63);
  a31=(a31-a13);
  a13=(a77*a31);
  a43=(a70*a28);
  a13=(a13-a43);
  a21=(a21-a13);
  a13=(a42*a21);
  a17=(a17*a63);
  a93=(a93*a83);
  a17=(a17-a93);
  a55=(a55*a15);
  a65=(a65*a48);
  a55=(a55-a65);
  a17=(a17+a55);
  a55=(a70*a12);
  a65=(a73*a31);
  a55=(a55-a65);
  a17=(a17-a55);
  a55=(a35*a17);
  a13=(a13+a55);
  a2=(a2+a13);
  if (res[0]!=0) res[0][18]=a2;
  a2=(a85*a18);
  a13=(a79*a21);
  a55=(a39*a17);
  a13=(a13+a55);
  a2=(a2+a13);
  if (res[0]!=0) res[0][19]=a2;
  a18=(a87*a18);
  a21=(a72*a21);
  a17=(a76*a17);
  a21=(a21+a17);
  a18=(a18+a21);
  if (res[0]!=0) res[0][20]=a18;
  a18=(a82*a31);
  a21=(a42*a12);
  a17=(a35*a28);
  a21=(a21+a17);
  a18=(a18+a21);
  if (res[0]!=0) res[0][21]=a18;
  a18=(a85*a31);
  a21=(a79*a12);
  a17=(a39*a28);
  a21=(a21+a17);
  a18=(a18+a21);
  if (res[0]!=0) res[0][22]=a18;
  a31=(a87*a31);
  a12=(a72*a12);
  a28=(a76*a28);
  a12=(a12+a28);
  a31=(a31+a12);
  if (res[0]!=0) res[0][23]=a31;
  a31=(a58*a6);
  a12=(a62*a27);
  a31=(a31-a12);
  a3=(a3-a31);
  a31=(a25*a3);
  a62=(a62*a19);
  a57=(a57-a62);
  a62=(a29*a57);
  a58=(a58*a19);
  a58=(a58-a7);
  a7=(a32*a58);
  a62=(a62+a7);
  a31=(a31+a62);
  a62=(a66*a31);
  a7=(a36*a3);
  a12=(a38*a57);
  a58=(a23*a58);
  a12=(a12+a58);
  a7=(a7+a12);
  a12=(a71*a7);
  a3=(a4*a3);
  a3=(a3-a57);
  a57=(a69*a3);
  a12=(a12+a57);
  a62=(a62+a12);
  a25=(a25*a19);
  a29=(a29*a27);
  a32=(a32*a6);
  a29=(a29+a32);
  a25=(a25+a29);
  a29=(a80*a25);
  a36=(a36*a19);
  a38=(a38*a27);
  a23=(a23*a6);
  a38=(a38+a23);
  a36=(a36+a38);
  a38=(a84*a36);
  a23=arg[1]? arg[1][4] : 0;
  a19=(a4*a19);
  a19=(a19-a27);
  a23=(a23+a19);
  a19=(a86*a23);
  a38=(a38+a19);
  a29=(a29+a38);
  a38=(a74*a29);
  a19=(a26*a25);
  a27=(a37*a36);
  a6=(a24*a23);
  a27=(a27+a6);
  a19=(a19+a27);
  a27=(a44*a19);
  a38=(a38-a27);
  a62=(a62+a38);
  a38=(a62*a24);
  a26=(a26*a31);
  a37=(a37*a7);
  a27=(a24*a3);
  a37=(a37+a27);
  a26=(a26+a37);
  a66=(a66*a25);
  a71=(a71*a36);
  a37=(a69*a23);
  a71=(a71+a37);
  a66=(a66+a71);
  a71=(a44*a66);
  a37=(a61*a29);
  a71=(a71-a37);
  a26=(a26+a71);
  a71=(a26*a69);
  a38=(a38-a71);
  a71=(a44*a69);
  a37=(a61*a86);
  a71=(a71-a37);
  a37=(a66*a71);
  a27=(a74*a86);
  a44=(a44*a24);
  a27=(a27-a44);
  a44=(a19*a27);
  a37=(a37-a44);
  a38=(a38+a37);
  a37=(a29*a69);
  a44=(a66*a86);
  a37=(a37-a44);
  a44=(a73*a37);
  a6=(a19*a86);
  a32=(a29*a24);
  a6=(a6-a32);
  a32=(a77*a6);
  a44=(a44-a32);
  a38=(a38-a44);
  a44=(a82*a38);
  a26=(a26*a86);
  a80=(a80*a31);
  a84=(a84*a7);
  a32=(a86*a3);
  a84=(a84+a32);
  a80=(a80+a84);
  a84=(a61*a19);
  a32=(a74*a66);
  a84=(a84-a32);
  a80=(a80+a84);
  a84=(a80*a24);
  a26=(a26-a84);
  a61=(a61*a24);
  a74=(a74*a69);
  a61=(a61-a74);
  a74=(a19*a61);
  a71=(a29*a71);
  a74=(a74-a71);
  a26=(a26+a74);
  a24=(a66*a24);
  a19=(a19*a69);
  a24=(a24-a19);
  a19=(a77*a24);
  a74=(a70*a37);
  a19=(a19-a74);
  a26=(a26-a19);
  a19=(a42*a26);
  a80=(a80*a69);
  a62=(a62*a86);
  a80=(a80-a62);
  a29=(a29*a27);
  a66=(a66*a61);
  a29=(a29-a66);
  a80=(a80+a29);
  a29=(a70*a6);
  a66=(a73*a24);
  a29=(a29-a66);
  a80=(a80-a29);
  a29=(a35*a80);
  a19=(a19+a29);
  a44=(a44+a19);
  if (res[0]!=0) res[0][24]=a44;
  a44=(a85*a38);
  a19=(a79*a26);
  a29=(a39*a80);
  a19=(a19+a29);
  a44=(a44+a19);
  if (res[0]!=0) res[0][25]=a44;
  a38=(a87*a38);
  a26=(a72*a26);
  a80=(a76*a80);
  a26=(a26+a80);
  a38=(a38+a26);
  if (res[0]!=0) res[0][26]=a38;
  a38=(a82*a24);
  a26=(a42*a6);
  a80=(a35*a37);
  a26=(a26+a80);
  a38=(a38+a26);
  if (res[0]!=0) res[0][27]=a38;
  a38=(a85*a24);
  a26=(a79*a6);
  a80=(a39*a37);
  a26=(a26+a80);
  a38=(a38+a26);
  if (res[0]!=0) res[0][28]=a38;
  a24=(a87*a24);
  a6=(a72*a6);
  a37=(a76*a37);
  a6=(a6+a37);
  a24=(a24+a6);
  if (res[0]!=0) res[0][29]=a24;
  a24=(a68*a36);
  a31=(a31+a24);
  a24=(a34*a31);
  a68=(a68*a25);
  a6=(a64*a23);
  a68=(a68-a6);
  a7=(a7-a68);
  a68=(a33*a7);
  a64=(a64*a36);
  a3=(a3-a64);
  a64=(a30*a3);
  a68=(a68-a64);
  a24=(a24+a68);
  a68=(a42*a24);
  a64=(a20*a31);
  a6=(a30*a7);
  a37=(a33*a3);
  a6=(a6+a37);
  a64=(a64-a6);
  a6=(a79*a64);
  a7=(a4*a7);
  a3=(a4*a3);
  a7=(a7+a3);
  a7=(a7-a31);
  a31=(a72*a7);
  a6=(a6+a31);
  a68=(a68+a6);
  a34=(a34*a25);
  a6=(a33*a36);
  a31=(a30*a23);
  a6=(a6-a31);
  a34=(a34+a6);
  a6=(a82*a34);
  a20=(a20*a25);
  a30=(a30*a36);
  a33=(a33*a23);
  a30=(a30+a33);
  a20=(a20-a30);
  a30=(a85*a20);
  a33=arg[1]? arg[1][5] : 0;
  a36=(a4*a36);
  a4=(a4*a23);
  a36=(a36+a4);
  a36=(a36-a25);
  a33=(a33+a36);
  a36=(a87*a33);
  a30=(a30+a36);
  a6=(a6+a30);
  a30=(a75*a6);
  a36=(a35*a34);
  a25=(a39*a20);
  a4=(a76*a33);
  a25=(a25+a4);
  a36=(a36+a25);
  a25=(a11*a36);
  a30=(a30-a25);
  a68=(a68+a30);
  a30=(a68*a76);
  a25=(a35*a24);
  a4=(a39*a64);
  a23=(a76*a7);
  a4=(a4+a23);
  a25=(a25+a4);
  a34=(a42*a34);
  a20=(a79*a20);
  a33=(a72*a33);
  a20=(a20+a33);
  a34=(a34+a20);
  a20=(a11*a34);
  a33=(a67*a6);
  a20=(a20-a33);
  a25=(a25+a20);
  a20=(a25*a72);
  a30=(a30-a20);
  a20=(a11*a72);
  a33=(a67*a87);
  a20=(a20-a33);
  a33=(a34*a20);
  a4=(a75*a87);
  a11=(a11*a76);
  a4=(a4-a11);
  a11=(a36*a4);
  a33=(a33-a11);
  a30=(a30+a33);
  a33=(a6*a72);
  a11=(a34*a87);
  a33=(a33-a11);
  a11=(a73*a33);
  a23=(a36*a87);
  a31=(a6*a76);
  a23=(a23-a31);
  a31=(a77*a23);
  a11=(a11-a31);
  a30=(a30-a11);
  a11=(a82*a30);
  a25=(a25*a87);
  a24=(a82*a24);
  a64=(a85*a64);
  a7=(a87*a7);
  a64=(a64+a7);
  a24=(a24+a64);
  a64=(a67*a36);
  a7=(a75*a34);
  a64=(a64-a7);
  a24=(a24+a64);
  a64=(a24*a76);
  a25=(a25-a64);
  a67=(a67*a76);
  a75=(a75*a72);
  a67=(a67-a75);
  a75=(a36*a67);
  a20=(a6*a20);
  a75=(a75-a20);
  a25=(a25+a75);
  a75=(a34*a76);
  a36=(a36*a72);
  a75=(a75-a36);
  a77=(a77*a75);
  a36=(a70*a33);
  a77=(a77-a36);
  a25=(a25-a77);
  a77=(a42*a25);
  a24=(a24*a72);
  a68=(a68*a87);
  a24=(a24-a68);
  a6=(a6*a4);
  a34=(a34*a67);
  a6=(a6-a34);
  a24=(a24+a6);
  a70=(a70*a23);
  a73=(a73*a75);
  a70=(a70-a73);
  a24=(a24-a70);
  a70=(a35*a24);
  a77=(a77+a70);
  a11=(a11+a77);
  if (res[0]!=0) res[0][30]=a11;
  a11=(a85*a30);
  a77=(a79*a25);
  a70=(a39*a24);
  a77=(a77+a70);
  a11=(a11+a77);
  if (res[0]!=0) res[0][31]=a11;
  a30=(a87*a30);
  a25=(a72*a25);
  a24=(a76*a24);
  a25=(a25+a24);
  a30=(a30+a25);
  if (res[0]!=0) res[0][32]=a30;
  a82=(a82*a75);
  a42=(a42*a23);
  a35=(a35*a33);
  a42=(a42+a35);
  a82=(a82+a42);
  if (res[0]!=0) res[0][33]=a82;
  a85=(a85*a75);
  a79=(a79*a23);
  a39=(a39*a33);
  a79=(a79+a39);
  a85=(a85+a79);
  if (res[0]!=0) res[0][34]=a85;
  a87=(a87*a75);
  a72=(a72*a23);
  a76=(a76*a33);
  a72=(a72+a76);
  a87=(a87+a72);
  if (res[0]!=0) res[0][35]=a87;
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_b(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int dJ_b_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_b_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_b_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int dJ_b_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_b_release(int mem) {
}

CASADI_SYMBOL_EXPORT void dJ_b_incref(void) {
}

CASADI_SYMBOL_EXPORT void dJ_b_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int dJ_b_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int dJ_b_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real dJ_b_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_b_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "v";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_b_name_out(casadi_int i) {
  switch (i) {
    case 0: return "dJ_b";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_b_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_b_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int dJ_b_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
