#include <iostream>
using namespace std;
#include <math.h>
 
int main() {
    double x1, x2, y1, y2;
    double result;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    result = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

    cout.precision(4);
    cout << fixed << result << "\n";

    return 0;
}