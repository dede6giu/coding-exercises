#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        if (n < 5) {
            cout << -1 << "\n";
            continue;
        }
        for (long long i = n%2? n-1 : n; i > 5; i -= 2) {
            cout << i << " ";    
        }
        cout << "2 4 5 3 1 ";
        for (long long i = 7; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << "\n";
    }    

    return 0;
}