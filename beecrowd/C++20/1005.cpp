#include <iostream>
using namespace std;
 
int main() {
    double x, y;

    cin >> x;
    cin >> y;

    cout.precision(5);
    cout << "MEDIA = " << fixed << (x * 3.5 + y * 7.5) / 11 << "\n";

    return 0;
}