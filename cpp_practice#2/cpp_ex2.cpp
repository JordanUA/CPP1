#include <iostream>
#include <string>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main()
{
  int x;
  int y;
  
  cout << "Enter x value:";
  cin >> x;
  
  cout << "enter y value:";
  cin >> y;
  
  if ((x>=-1 && x<=0 && y>=0 && y<=1) || (x<=1 && x>=0 && y<=0 && y>=-1))
  {
      cout<<"WIN";}
      else{
          cout<<"LOSE";}
  
  }