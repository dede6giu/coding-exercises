#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n, x = 0;

    cin >> n;

    while (n > 0) {
        cin >> a >> b >> c;

        if (a+b+c >= 2) {
            x++;
        }
        
        n--;
    }
    
    cout << x << "\n";

    return 0;
}
