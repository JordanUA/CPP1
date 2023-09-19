#include <iostream>
#include <string>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
  int a = 1;
  double b = 12.21;
  
  
  double result = 0;
  result = ((0.81 * sqrt(3) * a) - (1 / 2.125) * (sqrt(3) * b)) * exp(a);
  std::cout<<result;
}