#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, cnt = 0, aux, cur = -1, largg = 0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> aux;
            if (aux != cur) {
                largg = cnt > largg ? cnt : largg;
                cur = aux;
                cnt = 1;
            } else {
                cnt++;
            }
        }
        largg = cnt > largg ? cnt : largg;

        cout << n - largg << "\n";
    }

    return 0;
}