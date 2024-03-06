// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// classify_cpp
std::vector<std::string> classify_cpp(const arma::mat& y, const std::vector<std::string>& C, const double& t, const double& b);
RcppExport SEXP _RWNN_classify_cpp(SEXP ySEXP, SEXP CSEXP, SEXP tSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const double& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(classify_cpp(y, C, t, b));
    return rcpp_result_gen;
END_RCPP
}
// estimate_output_weights
Rcpp::List estimate_output_weights(const arma::mat& O, const arma::mat& y, const std::string& lnorm, const double& lambda);
RcppExport SEXP _RWNN_estimate_output_weights(SEXP OSEXP, SEXP ySEXP, SEXP lnormSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type O(OSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::string& >::type lnorm(lnormSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_output_weights(O, y, lnorm, lambda));
    return rcpp_result_gen;
END_RCPP
}
// rwnn_forward
std::vector<arma::mat> rwnn_forward(arma::mat X, const std::vector<arma::mat>& W, const std::vector<std::string>& activation, const std::vector<bool>& bias);
RcppExport SEXP _RWNN_rwnn_forward(SEXP XSEXP, SEXP WSEXP, SEXP activationSEXP, SEXP biasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const std::vector<arma::mat>& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type activation(activationSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type bias(biasSEXP);
    rcpp_result_gen = Rcpp::wrap(rwnn_forward(X, W, activation, bias));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RWNN_classify_cpp", (DL_FUNC) &_RWNN_classify_cpp, 4},
    {"_RWNN_estimate_output_weights", (DL_FUNC) &_RWNN_estimate_output_weights, 4},
    {"_RWNN_rwnn_forward", (DL_FUNC) &_RWNN_rwnn_forward, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_RWNN(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
