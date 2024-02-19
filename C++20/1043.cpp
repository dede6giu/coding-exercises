#include <iostream>
using namespace std;
 
int main() {
    double A, B, C;
    cout.precision(1);
    
    cin >> A >> B >> C;
    
    if (A < B+C and B < A+C and C < A+B) {
        // triangulo
        
        cout << fixed << "Perimetro = " << A+B+C << "\n";
    } else {
        // trapezio

        cout << fixed << "Area = " << (A+B)*C/2 << "\n";
    }
    return 0;
}