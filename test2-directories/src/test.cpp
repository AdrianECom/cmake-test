#include "test.h"
#include<iostream>

test::test(int a){
  this->a = a;
}

void test::greet(){
   std::cout << "Hello World!" << " " << this->a << std::endl;
}
