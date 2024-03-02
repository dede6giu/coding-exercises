#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    double a, b, c, delta;

    cin >> a >> b >> c;

    delta = (b*b) - (4*a*c);

    if (delta < 0 or a == 0) {
        cout << "Impossivel calcular" << "\n";
    } else {
        cout.precision(5);
        cout << fixed << "R1 = " << (-b + sqrt(delta)) / (2*a) << "\n";
        cout << fixed << "R2 = " << (-b - sqrt(delta)) / (2*a) << "\n";
    }
    return 0;
}