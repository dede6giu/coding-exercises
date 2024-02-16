#include <iostream>
using namespace std;
 
int main() {
    int a, m, d;

    cin >> d;

    a = d / 365;
    d = d - (a * 365);
    m = d / 30;
    d = d - (m * 30);

    cout << a << " ano(s)";
    cout << m << " mes(es)";
    cout << d << " dia(s)";

    return 0;
}