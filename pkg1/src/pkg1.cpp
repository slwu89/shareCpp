#include <Rcpp.h>

#include "class1.hpp"

//' @export
// [[Rcpp::export]]
void makeClass1(int id){
  class1 *class1ptr = new class1(id);
  class1ptr->testme();
  delete class1ptr;
}
