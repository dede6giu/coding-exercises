#include <iostream>
using namespace std;

int whichBigger(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int a, b, c, bigger;

    cin >> a >> b >> c;

    bigger = whichBigger(a, b);
    bigger = whichBigger(bigger, c);

    cout << bigger << " eh o maior" << "\n";

    return 0;
}