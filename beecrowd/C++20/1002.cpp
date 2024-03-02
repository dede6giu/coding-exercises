#include <iostream>
using namespace std;
 
int main() {
    const double pi = 3.14159;
    double r, area;

    cin >> r;
    area = r * r * pi;

    cout.precision(4);
    cout << fixed << "A=" << area << "\n";
 
    return 0;
}