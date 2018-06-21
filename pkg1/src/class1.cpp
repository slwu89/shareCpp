#include "class1.hpp"

class1::class1(int mydata_) : mydata(mydata_) {
  std::cout << "class1 being born at " << this << std::endl;
};

class1::~class1(){
  std::cout << "class1 being killed at " << this << std::endl;
};

void class1::testme(){
  std::cout << "class1 with id: " << mydata << std::endl;
}