#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t, x, y, aux;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x >= y) {
            if (x % 2 == 0) {
                cout << x*x - (y-1) << "\n";
            } else {
                cout << (x-1)*(x-1) + 1 + (y-1) << "\n";
            }
        } else {
            if (y % 2 == 1) {
                cout << y*y - (x-1) << "\n";
            } else {
                cout << (y-1)*(y-1) + 1 + (x-1) << "\n";
            }
        }
    }
 
    return 0;
}
