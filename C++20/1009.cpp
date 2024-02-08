#include <iostream>
using namespace std;
 
int main() {
    string name;
    double salary, sales;

    cin >> name;
    cin >> salary;
    cin >> sales;

    cout.precision(2);
    cout << "TOTAL = R$ " << fixed << salary + sales*0.15 << "\n";
    return 0;
}