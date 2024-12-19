#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, r, aux, cnt = 0;
        cin >> n >> r;
        vector<ll> fam;

        for (ll i = 0; i < n; i++) {
            cin >> aux;
            fam.push_back(aux);
        }

        for (ll i = 0; i < n; i++) {
            aux = fam[i];
            cnt += aux - (aux % 2);
            r -= aux / 2;
            aux %= 2;
            fam[i] = aux;
        }

        aux = 0;
        for (ll i = 0; i < n; i++) {
            if (fam[i] == 1) aux++;
        }
        if (r >= aux) {
            cnt += aux;
        } else {
            cnt += 2*r - aux;
        }

        cout << cnt << "\n";
    }

    return 0;
}