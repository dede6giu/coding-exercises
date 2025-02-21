#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> values, psum;

        for (ll i = 0; i < n; i++) {
            ll aux;
            cin >> aux;
            values.push_back(aux);
        }
        sort(values.begin(), values.end());
        reverse(values.begin(), values.end());

        psum.push_back(0);
        for (ll i = 0; i < n; i++) {
            psum.push_back(psum[i] + values[i]);
        }

        while (q--) {
            ll aux;
            cin >> aux;

            vector<ll>::iterator aux2 = lower_bound(psum.begin(), psum.end(), aux);

            if (aux2 == psum.end()) {
                cout << "-1";
            } else {
                cout << aux2 - psum.begin();
            }

            cout << "\n";
        }
    }

    return 0;
}