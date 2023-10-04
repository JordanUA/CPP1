#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return sqrt(sin(0) * x) + pow(x, 2); 
}

int main()
{
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << "-------------------" << endl;
    cout << ": X : Y :" << endl;
    cout << "-------------------" << endl;

    for (double x = a; x <= b; x += c) {
        if (x < a || x > b) {
            cout << "Value x does not belong to ODZ." << endl;
            break;
        }
        double y = f(x);
        cout << ": " << x << " : " << y << " :" << endl;
    }

    cout << "-------------------" << endl;

    return 0;
}
