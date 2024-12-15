#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, m, q, aux, beauty = 0;
    cin >> n >> m >> q;
    vector<ll> arr, brr;
    vector<ll> lin, col(m, 0);
    set<ll> val;

    for (ll i = 0; i < n; i++) {
        cin >> aux;
        arr.push_back(aux);
    }
    
    for (ll i = 0; i < m; i++) {
        cin >> aux;
        brr.push_back(aux);
    }

    for (ll i = 0; i < n; i++) {
        aux = 0;
        for (ll j = 0; j < m; j++) {
            aux += arr[i] * brr[j];
            beauty += arr[i] * brr[j];
            col[j] += arr[i] * brr[j];
        }
        lin.push_back(aux);
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            aux = lin[i] + col[j] - (arr[i] * brr[j]);
            val.insert(aux);
        }
    }

    while (q--) {
        ll obj, dist;
        bool state = false;
        cin >> obj;
        dist = beauty - obj;

        if (val.find(dist) != val.end()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}