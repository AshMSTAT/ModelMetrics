#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double logLoss_(NumericVector actual, NumericVector predicted) {

  NumericVector ll = -1*(actual*log(predicted) + (1-actual)*log(1-predicted));
  double logloss = mean(ll);
  return logloss ;

}


// [[Rcpp::export]]
double mlogLoss_(NumericVector actual, NumericMatrix predicted) {

  double Rows = predicted.nrow();
  double Cols = predicted.ncol();

  NumericMatrix actualMat = NumericMatrix(Dimension(Rows, Cols));

  for(int i = 0; i < Rows; ++i) {
    actualMat(i, actual(i) - 1) = 1;
  }

  double mlogloss = (-1 / Rows) * sum(actualMat * log(predicted));
  return mlogloss ;

}


