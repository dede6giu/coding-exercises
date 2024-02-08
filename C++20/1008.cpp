#include <iostream>
using namespace std;
 
int main() {
    int num, hour;
    double sal;

    cin >> num;
    cin >> hour;
    cin >> sal;

    cout << "NUMBER = " << num << "\n";
    cout.precision(2);
    cout << "SALARY = U$ " << fixed << hour * sal << "\n";
 
    return 0;
}