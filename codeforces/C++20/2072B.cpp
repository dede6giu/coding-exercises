#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        string s;
        cin >> n >> s;
        ll h = 0, u = 0;
        for (ll i = 0; i < n; i++) {
            if (s[i] == '-') {
                h++;
                continue;
            }
            u++;
        }
        if (h < 2 || u < 1) {
            cout << "0";
        } else {
            ll res; 
            if (h%2) {
                res = ((h+1)/2)*u*(h/2);
            } else {
                res = (h/2)*u*(h/2);
            }
            cout << res;
        }
        cout << "\n";
    }
    
    return 0;
}