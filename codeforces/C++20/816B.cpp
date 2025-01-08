#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, k, q;
    cin >> n >> k >> q;
    const ll MAXN = 200002;
    vector<ll> valid(MAXN, 0), temp, del(MAXN, 0);

    while (n--) {
        ll l, r;
        cin >> l >> r;
        del[l]++;
        del[r+1]--;
    }

    temp.push_back(0);
    for (ll i = 1; i <= MAXN-2; i++) {
        temp.push_back(temp[i-1] + del[i]);
    }
    temp.push_back(0);

    for (ll i = 1; i <= MAXN-2; i++) {
        if (temp[i] >= k) {
            valid[i] = valid[i-1] + 1;
        } else {
            valid[i] = valid[i-1];
        }
    }

    while (q--) {
        ll a, b;
        cin >> a >> b;
        cout << valid[b] - valid[a-1] << "\n";
    }

    return 0;
}