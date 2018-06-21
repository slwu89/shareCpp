#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::depends(pkg1)]]

#include <pkg1.h>

//' @export
// [[Rcpp::export]]
void call_pkg1_from_pkg2(){
  pkg1::makeClass1(2);
}

// //' @export
// // [[Rcpp::export]]
// void call_pkg1_class_from_pkg2(int id){
//   class1 *class1ptr = new class1(id);
//   class1ptr->testme();
//   delete class1ptr;
// }