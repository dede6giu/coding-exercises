#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;
    
    while (t--) {
        ull n, lim;
        cin >> n;

        lim = pow(2, ceil(log2(n))-1);

        for (ll i = lim-1; i >= 0; i--) {
            cout << i << " ";
        }

        for (ll i = lim; i < n; i++) {
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}