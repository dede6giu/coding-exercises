#include <bits/stdc++.h>
using namespace std;
    
int main() {
    long long int t, a, b;
    cin >> t;
    
    while (t > 0) {
        cin >> a >> b;
    
        if (a >= b) {
            cout << a << "\n";
        } else {
            if (b - a >= a) {
                cout << "0" << "\n";
            } else {
                cout << a - (b-a) << "\n";
            }
        }
    
        t--;
    }
    return 0;
}