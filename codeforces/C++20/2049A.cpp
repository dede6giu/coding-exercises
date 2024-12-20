#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, aux, cnt = 0;
        bool state = false;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> aux;
            if (aux == 0) {
                state = false;
                continue;
            }
            if (!state) {
                state = true;
                cnt++;
            }
        }
        if (cnt >= 2) {
            cout << 2 << "\n";
        } else {
            cout << cnt << "\n";
        }
    }

    return 0;
}