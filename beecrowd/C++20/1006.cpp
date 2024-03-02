#include <iostream>
using namespace std;
 
int main() {
    double x, y, z;

    cin >> x;
    cin >> y;
    cin >> z;

    cout.precision(1);
    cout << "MEDIA = " << fixed << (x * 2 + y * 3 + z * 5) / 10 << "\n";

    return 0;
}