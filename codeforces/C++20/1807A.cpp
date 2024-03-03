#include <iostream>
using namespace std;

int main() {
    int n, a, b, c = 0;

    cin >> n;

    while (n > 0) {
        cin >> a >> b >> c;
        
        if (a+b == c) {
            cout << "+" << "\n";
        } else {
            cout << "-" << "\n";
        }

        n--;
    }

    return 0;
}