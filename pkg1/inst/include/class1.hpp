#ifndef PKG1_CLASS1
#define PKG1_CLASS1

#include <Rcpp.h>

#include <iostream>

/* minimal class */
class class1 {
public:
  class1(int mydata_);
  virtual ~class1();
  
  void testme();
private:
  int mydata;
};


#endif