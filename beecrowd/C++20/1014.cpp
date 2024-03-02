#include <iostream>
using namespace std;
 
int main() {
    int X;
    double Y;

    cin >> X;
    cin >> Y;

    cout.precision(3);
    cout << fixed << X / Y << " km/l" << "\n";

    return 0;
}