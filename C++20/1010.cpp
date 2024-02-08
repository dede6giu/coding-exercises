#include <iostream>
using namespace std;
 
int main() {
    string order1, order2;
    int amnt1, amnt2;
    double pr1, pr2;

    cin >> order1 >> amnt1 >> pr1;
    cin >> order2 >> amnt2 >> pr2;

    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << fixed << amnt1 * pr1 + amnt2 * pr2 << "\n";

    return 0;
}