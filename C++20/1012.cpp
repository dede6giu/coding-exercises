#include <iostream>
using namespace std;
 
int main() {
    double A, B, C;
    double pi = 3.14159;

    cin >> A >> B >> C;

    cout.precision(3);
    cout << fixed << "TRIANGULO: " << A * C / 2 << "\n";
    cout << fixed << "CIRCULO: " << pi * C * C << "\n";
    cout << fixed << "TRAPEZIO: " << (A + B) * C / 2 << "\n";
    cout << fixed << "QUADRADO: " << B * B << "\n";
    cout << fixed << "RETANGULO: " << A * B << "\n";

    return 0;
}