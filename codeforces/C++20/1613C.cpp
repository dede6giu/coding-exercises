#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, h;
        cin >> n >> h;
        vector<ll> sec, dsec, psec;
        for (ll i = 0; i < n; i++) {
            ll aux;
            cin >> aux;
            sec.push_back(aux);
        }
        for (ll i = 1; i < n; i++) {
            dsec.push_back(sec[i] - sec[i-1]);
        }
        dsec.push_back(h);
        sort(dsec.begin(), dsec.end());

        psec.push_back(0);
        for (ll i = 0; i < n; i++) {
            psec.push_back(dsec[i] + psec[i]);
        }

        ll l = 1, r = dsec[n-1];
        while (r>l) {
            ll mid = (l+r)/2;
            ll aux = upper_bound(dsec.begin(), dsec.end(), mid) - dsec.begin();
            if (psec[aux] + mid*(n-aux) >= h) {
                r = mid;
            } else {
                l = mid+1;
            }
        }
        cout << r << "\n";
    }

    return 0;
}