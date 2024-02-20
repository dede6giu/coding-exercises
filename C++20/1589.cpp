#include <iostream>
using namespace std;

int main() {
    int n, r1, r2 = 0;

    cin >> n;

    while (n != 0) {
        cin >> r1 >> r2;
        cout << r1 + r2 << "\n";
        n--;
    }
    
    return 0;
}