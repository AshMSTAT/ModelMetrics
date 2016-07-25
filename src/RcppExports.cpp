// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sort_rcpp
NumericVector sort_rcpp(NumericVector x);
RcppExport SEXP ModelMetrics_sort_rcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(sort_rcpp(x));
    return __result;
END_RCPP
}
// rank
IntegerVector rank(NumericVector x);
RcppExport SEXP ModelMetrics_rank(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(rank(x));
    return __result;
END_RCPP
}
// auc_
double auc_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_auc_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    __result = Rcpp::wrap(auc_(actual, predicted));
    return __result;
END_RCPP
}
// logLoss_
double logLoss_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_logLoss_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    __result = Rcpp::wrap(logLoss_(actual, predicted));
    return __result;
END_RCPP
}
