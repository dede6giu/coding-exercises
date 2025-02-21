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
        cin >> n;
        set<ll> nums;
        vector<ll> real;

        for (ll i = 0; i < n; i++) {
            ll aux;
            cin >> aux;
            if (nums.count(aux) == 0) {
                nums.insert(aux);
                real.push_back(aux);
            }
        }

        ll res = -1;
        for (ll i = 0; i < real.size(); i++) {
            res &= real[i];
        }
        cout << res << "\n";
    }

    return 0;
}