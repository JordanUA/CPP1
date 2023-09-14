#include <iostream>
#include <string>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main()
{
  int x;
  int y;
  double w;
  
  cout << "Enter x value:";
  cin >> x;
  cout << "Enter y value:";
  cin >> y;
  
  if (x >= 0){
      w = exp(-x + 2);
      }
      if (x < 0){
          w = exp(-x)*sin(1./x+3.2);
          }
          cout << "result" << w;
  
  
  }