#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k, p;
        cin >> n >> k >> p;
        if (abs(n*p) >= abs(k)) {
            ll res = abs(k/p);
            if (k % p != 0) res++;
            cout << res;
        } else {
            cout << "-1";
        }
        cout << "\n";
    }
    
    return 0;
}