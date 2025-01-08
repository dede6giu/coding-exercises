#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, q, aux, cnt = 0;
    cin >> n >> q;

    vector<ll> psum;
    psum.push_back(0);
    for (ll i = 0; i < n; i++) {
        cin >> aux;
        cnt += aux;
        psum.push_back(cnt);
    }

    while(q--) {
        ll l, r;
        cin >> l >> r;
        cout << psum[r] - psum[l-1] << "\n";
    }

    return 0;
}