#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::depends(pkg1)]]

#include <pkg1.h>

//' @export
// [[Rcpp::export]]
void testpkg1(){
  pkg1::makeClass1(2);
}