#define USE_FC_LEN_T
#define STRICT_R_HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>
#include "../inst/include/rxode2random.h"
#define __DOINIT__
#include "rxthreefry.h"

SEXP _rxode2random_rinvchisq(SEXP nSEXP, SEXP nuSEXP, SEXP scaleSEXP);
SEXP _rxode2random_rLKJ1(SEXP dSEXP, SEXP etaSEXP, SEXP choleskySEXP);
SEXP _rxode2random_rLKJcv1(SEXP sdSEXP, SEXP etaSEXP);
SEXP _rxode2random_rLKJcvLsd1(SEXP logSdSEXP, SEXP logSdSDSEXP, SEXP etaSEXP);
SEXP _rxode2random_invWR1d(SEXP dSEXP, SEXP nuSEXP, SEXP omegaIsCholSEXP);
SEXP _rxode2random_rcvC1(SEXP sdEstSEXP, SEXP nuSEXP, SEXP diagXformTypeSEXP, SEXP rTypeSEXP, SEXP returnCholSEXP);
SEXP _rxode2random_cvPost_(SEXP nuSSEXP, SEXP omegaSSEXP, SEXP nSSEXP, SEXP omegaIsCholSSEXP, SEXP returnCholSSEXP, SEXP typeSSEXP, SEXP diagXformTypeSSEXP);
SEXP _rxode2random_expandTheta_(SEXP thetaSSEXP, SEXP thetaMatSSEXP, SEXP thetaLowerSSEXP, SEXP thetaUpperSSEXP, SEXP nStudSSEXP, SEXP nCoresRVSSEXP);
SEXP _rxode2random_expandPars_(SEXP objectSSEXP, SEXP paramsSSEXP, SEXP eventsSSEXP, SEXP controlSSEXP);
SEXP _rxode2random_nestingInfo_(SEXP omegaSEXP, SEXP dataSEXP);
SEXP _rxode2random_rxRmvn_(SEXP A_SEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP ncoresSEXP, SEXP isCholSEXP);
SEXP _rxode2random_rxMvnrnd(SEXP nSEXP, SEXP LSEXP, SEXP lSEXP, SEXP uSEXP, SEXP muSEXP, SEXP aSEXP, SEXP tolSEXP);
SEXP _rxode2random_rxCholperm(SEXP SigSEXP, SEXP lSEXP, SEXP uSEXP, SEXP epsSEXP);
SEXP _rxode2random_rxGradpsi(SEXP ySEXP, SEXP LSEXP, SEXP lSEXP, SEXP uSEXP);
SEXP _rxode2random_rxNleq(SEXP lSEXP, SEXP uSEXP, SEXP LSEXP);
SEXP _rxode2random_rxMvrandn_(SEXP A_SEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP ncoresSEXP, SEXP aSEXP, SEXP tolSEXP, SEXP nlTolSEXP, SEXP nlMaxiterSEXP);
SEXP _rxode2random_rxSeedEng(SEXP ncoresSEXP);
SEXP _rxode2random_rxnbinom_(SEXP sizeSEXP, SEXP muSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxgamma_(SEXP sizeSEXP, SEXP muSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxpois_(SEXP lambdaSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxnbinomMu_(SEXP sizeSEXP, SEXP muSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxbinom_(SEXP n0SEXP, SEXP probSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxcauchy_(SEXP locationSEXP, SEXP scaleSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxchisq_(SEXP dfSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxexp_(SEXP rateSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxf_(SEXP df1SEXP, SEXP df2SEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxbeta_(SEXP shape1SEXP, SEXP shape2SEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxgeom_(SEXP probSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxnorm_(SEXP meanSEXP, SEXP sdSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxt__(SEXP dfSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxunif_(SEXP lowSEXP, SEXP hiSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxweibull_(SEXP shapeSEXP, SEXP scaleSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxRmvn0(SEXP A_SEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP ncoresSEXP, SEXP isCholSEXP, SEXP aSEXP, SEXP tolSEXP, SEXP nlTolSEXP, SEXP nlMaxiterSEXP);
SEXP _rxode2random_rxRmvnSEXP(SEXP nSSEXP, SEXP muSSEXP, SEXP sigmaSSEXP, SEXP lowerSSEXP, SEXP upperSSEXP, SEXP ncoresSSEXP, SEXP isCholSSEXP, SEXP keepNamesSSEXP, SEXP aSSEXP, SEXP tolSSEXP, SEXP nlTolSSEXP, SEXP nlMaxiterSSEXP);
SEXP _rxode2random_rpp_(SEXP nSSEXP, SEXP lambdaSSEXP, SEXP gammaSSEXP, SEXP probSSEXP, SEXP t0SSEXP, SEXP tmaxSSEXP, SEXP randomOrderSSEXP);
SEXP _rxode2random_rxordSelect(SEXP uSEXP, SEXP csSEXP);
SEXP _rxode2random_rxrandnV(SEXP nrowSEXP, SEXP ncolSEXP);
SEXP _rxode2random_rxnormV_(SEXP meanSEXP, SEXP sdSEXP, SEXP nSEXP, SEXP ncoresSEXP);
SEXP _rxode2random_rxGetSeed(void);
SEXP _rxode2random_phi(SEXP q);

SEXP _rxode2random_rxSetSeed(SEXP);

void R_init_rxode2random(DllInfo *info){
  R_CallMethodDef callMethods[]  = {
    {"_rxode2random_rxSetSeed", (DL_FUNC) &_rxode2random_rxSetSeed, 1},
    {"_rxode2random_rinvchisq", (DL_FUNC) &_rxode2random_rinvchisq, 3},
    {"_rxode2random_rLKJ1", (DL_FUNC) &_rxode2random_rLKJ1, 3},
    {"_rxode2random_rLKJcv1", (DL_FUNC) &_rxode2random_rLKJcv1, 2},
    {"_rxode2random_rLKJcvLsd1", (DL_FUNC) &_rxode2random_rLKJcvLsd1, 3},
    {"_rxode2random_invWR1d", (DL_FUNC) &_rxode2random_invWR1d, 3},
    {"_rxode2random_rcvC1", (DL_FUNC) &_rxode2random_rcvC1, 5},
    {"_rxode2random_cvPost_", (DL_FUNC) &_rxode2random_cvPost_, 7},
    {"_rxode2random_expandTheta_", (DL_FUNC) &_rxode2random_expandTheta_, 6},
    {"_rxode2random_expandPars_", (DL_FUNC) &_rxode2random_expandPars_, 4},
    {"_rxode2random_nestingInfo_", (DL_FUNC) &_rxode2random_nestingInfo_, 2},
    {"_rxode2random_rxRmvn_", (DL_FUNC) &_rxode2random_rxRmvn_, 5},
    {"_rxode2random_rxMvnrnd", (DL_FUNC) &_rxode2random_rxMvnrnd, 7},
    {"_rxode2random_rxCholperm", (DL_FUNC) &_rxode2random_rxCholperm, 4},
    {"_rxode2random_rxGradpsi", (DL_FUNC) &_rxode2random_rxGradpsi, 4},
    {"_rxode2random_rxNleq", (DL_FUNC) &_rxode2random_rxNleq, 3},
    {"_rxode2random_rxMvrandn_", (DL_FUNC) &_rxode2random_rxMvrandn_, 10},
    {"_rxode2random_rxSeedEng", (DL_FUNC) &_rxode2random_rxSeedEng, 1},
    {"_rxode2random_rxnbinomMu_", (DL_FUNC) &_rxode2random_rxnbinomMu_, 4},
    {"_rxode2random_rxnbinom_", (DL_FUNC) &_rxode2random_rxnbinom_, 4},
    {"_rxode2random_rxbinom_", (DL_FUNC) &_rxode2random_rxbinom_, 4},
    {"_rxode2random_rxcauchy_", (DL_FUNC) &_rxode2random_rxcauchy_, 4},
    {"_rxode2random_rxchisq_", (DL_FUNC) &_rxode2random_rxchisq_, 3},
    {"_rxode2random_rxexp_", (DL_FUNC) &_rxode2random_rxexp_, 3},
    {"_rxode2random_rxf_", (DL_FUNC) &_rxode2random_rxf_, 4},
    {"_rxode2random_rxgamma_", (DL_FUNC) &_rxode2random_rxgamma_, 4},
    {"_rxode2random_rxbeta_", (DL_FUNC) &_rxode2random_rxbeta_, 4},
    {"_rxode2random_rxgeom_", (DL_FUNC) &_rxode2random_rxgeom_, 3},
    {"_rxode2random_rxnorm_", (DL_FUNC) &_rxode2random_rxnorm_, 4},
    {"_rxode2random_rxpois_", (DL_FUNC) &_rxode2random_rxpois_, 3},
    {"_rxode2random_rxt__", (DL_FUNC) &_rxode2random_rxt__, 3},
    {"_rxode2random_rxunif_", (DL_FUNC) &_rxode2random_rxunif_, 4},
    {"_rxode2random_rxweibull_", (DL_FUNC) &_rxode2random_rxweibull_, 4},
    {"_rxode2random_rxRmvn0", (DL_FUNC) &_rxode2random_rxRmvn0, 11},
    {"_rxode2random_rxRmvnSEXP", (DL_FUNC) &_rxode2random_rxRmvnSEXP, 12},
    {"_rxode2random_rpp_", (DL_FUNC) &_rxode2random_rpp_, 7},
    {"_rxode2random_rxordSelect", (DL_FUNC) &_rxode2random_rxordSelect, 2},
    {"_rxode2random_rxrandnV", (DL_FUNC) &_rxode2random_rxrandnV, 2},
    {"_rxode2random_rxnormV_", (DL_FUNC) &_rxode2random_rxnormV_, 4},
    {"_rxode2random_rxGetSeed", (DL_FUNC) &_rxode2random_rxGetSeed, 0},
    {"_rxode2random_phi", (DL_FUNC) &_rxode2random_phi, 1},
    {NULL, NULL, 0} 
  };
  // C callable to assign environments.
  R_RegisterCCallable("rxode2random", "simeps", (DL_FUNC) &simeps);
  R_RegisterCCallable("rxode2random", "simeta", (DL_FUNC) &simeta);
  
  R_RegisterCCallable("rxode2random", "phi", (DL_FUNC) &phi);
  
  R_RegisterCCallable("rxode2random", "rxnormV", (DL_FUNC) &rxnormV);
  R_RegisterCCallable("rxode2random", "rinormV", (DL_FUNC) &rinormV);
  
  R_RegisterCCallable("rxode2random", "rxgamma", (DL_FUNC) &rxgamma);
  R_RegisterCCallable("rxode2random", "rxbeta", (DL_FUNC) &rxbeta);
  R_RegisterCCallable("rxode2random", "rxbinom", (DL_FUNC) &rxbinom);
  R_RegisterCCallable("rxode2random", "rxnbinomMu", (DL_FUNC) &rxnbinomMu);
  R_RegisterCCallable("rxode2random", "rxnbinom", (DL_FUNC) &rxnbinom);
  R_RegisterCCallable("rxode2random", "rxcauchy", (DL_FUNC) &rxcauchy);
  R_RegisterCCallable("rxode2random", "rxchisq", (DL_FUNC) &rxchisq);
  R_RegisterCCallable("rxode2random", "rxexp", (DL_FUNC) &rxexp);
  R_RegisterCCallable("rxode2random", "rxf", (DL_FUNC) &rxf);
  R_RegisterCCallable("rxode2random", "rxgeom", (DL_FUNC) &rxgeom);
  R_RegisterCCallable("rxode2random", "rxnorm", (DL_FUNC) &rxnorm);
  R_RegisterCCallable("rxode2random", "rxpois", (DL_FUNC) &rxpois);
  R_RegisterCCallable("rxode2random", "rxt_", (DL_FUNC) &rxt_);
  R_RegisterCCallable("rxode2random", "rxunif", (DL_FUNC) &rxunif);
  R_RegisterCCallable("rxode2random", "rxweibull", (DL_FUNC) &rxweibull);

  R_RegisterCCallable("rxode2random", "rigamma", (DL_FUNC) &rigamma);
  R_RegisterCCallable("rxode2random", "ribeta", (DL_FUNC) &ribeta);
  R_RegisterCCallable("rxode2random", "ribinom", (DL_FUNC) &ribinom);
  R_RegisterCCallable("rxode2random", "rinbinomMu", (DL_FUNC) &rinbinomMu);
  R_RegisterCCallable("rxode2random", "rinbinom", (DL_FUNC) &rinbinom);
  R_RegisterCCallable("rxode2random", "ricauchy", (DL_FUNC) &ricauchy);
  R_RegisterCCallable("rxode2random", "richisq", (DL_FUNC) &richisq);
  R_RegisterCCallable("rxode2random", "riexp", (DL_FUNC) &riexp);
  R_RegisterCCallable("rxode2random", "rif", (DL_FUNC) &rif);
  R_RegisterCCallable("rxode2random", "rigeom", (DL_FUNC) &rigeom);
  R_RegisterCCallable("rxode2random", "rinorm", (DL_FUNC) &rinorm);
  R_RegisterCCallable("rxode2random", "ripois", (DL_FUNC) &ripois);
  R_RegisterCCallable("rxode2random", "rit_", (DL_FUNC) &rit_);
  R_RegisterCCallable("rxode2random", "riunif", (DL_FUNC) &riunif);
  R_RegisterCCallable("rxode2random", "riweibull", (DL_FUNC) &riweibull);

  // log likelihoods used in calculations
  static const R_CMethodDef cMethods[] = {
    {NULL, NULL, 0, NULL}
  };

  R_registerRoutines(info, cMethods, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}

void R_unload_rxode2random(DllInfo *info){
}
