#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void) { 
    int product = 1;
    for (int i = 4; i < 40; i += 4) {
        product *= i;
    }
    cout << "Product of multiples of 4 and less than 40: " << product << endl;
    return 0;
    
}