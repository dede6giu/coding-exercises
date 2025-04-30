#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr;
        for (ll i = 0; i < n; i++) {
            ll aux;
            cin >> aux;
            arr.push_back(aux);
        }
        sort(arr.begin(), arr.end());
        
        vector<ll> psum;
        psum.push_back(0);
        for (ll i = 0; i < n; i++) {
            psum.push_back(psum[i] + arr[i]);
        }

        ll l = 0, r = n-k;
        ll max = 0;
        while (r < n+1) {
            ll aux = psum[r] - psum[l];
            if (aux > max) max = aux;
            l += 2;
            r += 1;
        }

        cout << max << "\n";
    }

    return 0;
}