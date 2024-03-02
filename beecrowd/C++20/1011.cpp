#include <iostream>
using namespace std;
 
int main() {
    const double pi = 3.14159;
    double r;

    cin >> r;

    cout.precision(3);
    cout << fixed << "VOLUME = " << (4/3.0) * pi * r * r * r << "\n";

    return 0;
}