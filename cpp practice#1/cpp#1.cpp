#include <iostream>
#include <string>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
  int a = 10;
  double b = 0.5;
  
  
  double result = 0;
  result = 0.314*exp(a) - 0.512*exp(b)/ sin((b/3)*M_PI);
  std::cout<<result;
}