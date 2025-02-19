#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, t;
    cin >> n >> t;
    vector<ll> books;
    for (ll i = 0; i < n; i++) {
        ll aux;
        cin >> aux;
        books.push_back(aux);
    }

    vector<ll> pbooks;
    pbooks.push_back(0);
    for (ll i = 0; i < n; i++) {
        pbooks.push_back(pbooks[i] + books[i]);
    }

    ll l = 0, r = 1;
    ll maxb = 0;
    while (r <= n) {
        if (l == r) {
            r++;
            continue;
        }
        ll curr = pbooks[r] - pbooks[l];
        if (curr <= t) {
            ll aux = r-l;
            maxb = aux > maxb ? aux : maxb;
            r++;
        } else {
            l++;
        }
    }
    
    cout << maxb << "\n";
    
    return 0;
}