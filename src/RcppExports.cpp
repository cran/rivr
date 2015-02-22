// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// froude
double froude(double Q, double g, double A, double DH);
RcppExport SEXP rivr_froude(SEXP QSEXP, SEXP gSEXP, SEXP ASEXP, SEXP DHSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type Q(QSEXP );
        Rcpp::traits::input_parameter< double >::type g(gSEXP );
        Rcpp::traits::input_parameter< double >::type A(ASEXP );
        Rcpp::traits::input_parameter< double >::type DH(DHSEXP );
        double __result = froude(Q, g, A, DH);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// channel_geom
NumericVector channel_geom(double y, double B, double SS);
RcppExport SEXP rivr_channel_geom(SEXP ySEXP, SEXP BSEXP, SEXP SSSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type y(ySEXP );
        Rcpp::traits::input_parameter< double >::type B(BSEXP );
        Rcpp::traits::input_parameter< double >::type SS(SSSEXP );
        NumericVector __result = channel_geom(y, B, SS);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// conveyance
double conveyance(double n, double A, double R, double Cm);
RcppExport SEXP rivr_conveyance(SEXP nSEXP, SEXP ASEXP, SEXP RSEXP, SEXP CmSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        Rcpp::traits::input_parameter< double >::type A(ASEXP );
        Rcpp::traits::input_parameter< double >::type R(RSEXP );
        Rcpp::traits::input_parameter< double >::type Cm(CmSEXP );
        double __result = conveyance(n, A, R, Cm);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// normal_depth
double normal_depth(double So, double n, double Q, double yopt, double Cm, double B, double SS);
RcppExport SEXP rivr_normal_depth(SEXP SoSEXP, SEXP nSEXP, SEXP QSEXP, SEXP yoptSEXP, SEXP CmSEXP, SEXP BSEXP, SEXP SSSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type So(SoSEXP );
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        Rcpp::traits::input_parameter< double >::type Q(QSEXP );
        Rcpp::traits::input_parameter< double >::type yopt(yoptSEXP );
        Rcpp::traits::input_parameter< double >::type Cm(CmSEXP );
        Rcpp::traits::input_parameter< double >::type B(BSEXP );
        Rcpp::traits::input_parameter< double >::type SS(SSSEXP );
        double __result = normal_depth(So, n, Q, yopt, Cm, B, SS);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// critical_depth
double critical_depth(double Q, double yopt, double g, double B, double SS);
RcppExport SEXP rivr_critical_depth(SEXP QSEXP, SEXP yoptSEXP, SEXP gSEXP, SEXP BSEXP, SEXP SSSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type Q(QSEXP );
        Rcpp::traits::input_parameter< double >::type yopt(yoptSEXP );
        Rcpp::traits::input_parameter< double >::type g(gSEXP );
        Rcpp::traits::input_parameter< double >::type B(BSEXP );
        Rcpp::traits::input_parameter< double >::type SS(SSSEXP );
        double __result = critical_depth(Q, yopt, g, B, SS);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// loop_step
NumericMatrix loop_step(double So, double n, double Q, double Cm, double g, double y, double B, double SS, double z, double x, double stepdist, double totaldist);
RcppExport SEXP rivr_loop_step(SEXP SoSEXP, SEXP nSEXP, SEXP QSEXP, SEXP CmSEXP, SEXP gSEXP, SEXP ySEXP, SEXP BSEXP, SEXP SSSEXP, SEXP zSEXP, SEXP xSEXP, SEXP stepdistSEXP, SEXP totaldistSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type So(SoSEXP );
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        Rcpp::traits::input_parameter< double >::type Q(QSEXP );
        Rcpp::traits::input_parameter< double >::type Cm(CmSEXP );
        Rcpp::traits::input_parameter< double >::type g(gSEXP );
        Rcpp::traits::input_parameter< double >::type y(ySEXP );
        Rcpp::traits::input_parameter< double >::type B(BSEXP );
        Rcpp::traits::input_parameter< double >::type SS(SSSEXP );
        Rcpp::traits::input_parameter< double >::type z(zSEXP );
        Rcpp::traits::input_parameter< double >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type stepdist(stepdistSEXP );
        Rcpp::traits::input_parameter< double >::type totaldist(totaldistSEXP );
        NumericMatrix __result = loop_step(So, n, Q, Cm, g, y, B, SS, z, x, stepdist, totaldist);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// kinematic_wave
List kinematic_wave(double So, double n, double Cm, double g, double B, double SS, int numnodes, NumericVector bc, double ic, double timestep, double spacestep, IntegerVector mpidx, IntegerVector mtidx);
RcppExport SEXP rivr_kinematic_wave(SEXP SoSEXP, SEXP nSEXP, SEXP CmSEXP, SEXP gSEXP, SEXP BSEXP, SEXP SSSEXP, SEXP numnodesSEXP, SEXP bcSEXP, SEXP icSEXP, SEXP timestepSEXP, SEXP spacestepSEXP, SEXP mpidxSEXP, SEXP mtidxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type So(SoSEXP );
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        Rcpp::traits::input_parameter< double >::type Cm(CmSEXP );
        Rcpp::traits::input_parameter< double >::type g(gSEXP );
        Rcpp::traits::input_parameter< double >::type B(BSEXP );
        Rcpp::traits::input_parameter< double >::type SS(SSSEXP );
        Rcpp::traits::input_parameter< int >::type numnodes(numnodesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type bc(bcSEXP );
        Rcpp::traits::input_parameter< double >::type ic(icSEXP );
        Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< double >::type spacestep(spacestepSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type mpidx(mpidxSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type mtidx(mtidxSEXP );
        List __result = kinematic_wave(So, n, Cm, g, B, SS, numnodes, bc, ic, timestep, spacestep, mpidx, mtidx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// characteristic_wave
List characteristic_wave(double So, double n, double Cm, double g, double B, double SS, int numnodes, NumericVector bc, NumericVector dc, double ic, double timestep, double spacestep, IntegerVector mpidx, IntegerVector mtidx, std::string btype);
RcppExport SEXP rivr_characteristic_wave(SEXP SoSEXP, SEXP nSEXP, SEXP CmSEXP, SEXP gSEXP, SEXP BSEXP, SEXP SSSEXP, SEXP numnodesSEXP, SEXP bcSEXP, SEXP dcSEXP, SEXP icSEXP, SEXP timestepSEXP, SEXP spacestepSEXP, SEXP mpidxSEXP, SEXP mtidxSEXP, SEXP btypeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type So(SoSEXP );
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        Rcpp::traits::input_parameter< double >::type Cm(CmSEXP );
        Rcpp::traits::input_parameter< double >::type g(gSEXP );
        Rcpp::traits::input_parameter< double >::type B(BSEXP );
        Rcpp::traits::input_parameter< double >::type SS(SSSEXP );
        Rcpp::traits::input_parameter< int >::type numnodes(numnodesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type bc(bcSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type dc(dcSEXP );
        Rcpp::traits::input_parameter< double >::type ic(icSEXP );
        Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< double >::type spacestep(spacestepSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type mpidx(mpidxSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type mtidx(mtidxSEXP );
        Rcpp::traits::input_parameter< std::string >::type btype(btypeSEXP );
        List __result = characteristic_wave(So, n, Cm, g, B, SS, numnodes, bc, dc, ic, timestep, spacestep, mpidx, mtidx, btype);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// diffusive_wave
List diffusive_wave(double So, double n, double Cm, double g, double B, double SS, int numnodes, NumericVector bc, NumericVector dc, double ic, double timestep, double spacestep, IntegerVector mpidx, IntegerVector mtidx, std::string btype);
RcppExport SEXP rivr_diffusive_wave(SEXP SoSEXP, SEXP nSEXP, SEXP CmSEXP, SEXP gSEXP, SEXP BSEXP, SEXP SSSEXP, SEXP numnodesSEXP, SEXP bcSEXP, SEXP dcSEXP, SEXP icSEXP, SEXP timestepSEXP, SEXP spacestepSEXP, SEXP mpidxSEXP, SEXP mtidxSEXP, SEXP btypeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type So(SoSEXP );
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        Rcpp::traits::input_parameter< double >::type Cm(CmSEXP );
        Rcpp::traits::input_parameter< double >::type g(gSEXP );
        Rcpp::traits::input_parameter< double >::type B(BSEXP );
        Rcpp::traits::input_parameter< double >::type SS(SSSEXP );
        Rcpp::traits::input_parameter< int >::type numnodes(numnodesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type bc(bcSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type dc(dcSEXP );
        Rcpp::traits::input_parameter< double >::type ic(icSEXP );
        Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< double >::type spacestep(spacestepSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type mpidx(mpidxSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type mtidx(mtidxSEXP );
        Rcpp::traits::input_parameter< std::string >::type btype(btypeSEXP );
        List __result = diffusive_wave(So, n, Cm, g, B, SS, numnodes, bc, dc, ic, timestep, spacestep, mpidx, mtidx, btype);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
