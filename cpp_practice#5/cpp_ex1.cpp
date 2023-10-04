#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    for (int i = 0; i < 5; i++) {
        cout << "Enter x: ";
        cin >> x;
        y = pow(sin(0), 5) * x + fabs(5 * x - 1.5);
        cout << "Function Value for x = " << x << ": " << y << endl;
    }
    return 0;
}
