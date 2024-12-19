#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, aux;
        cin >> n;
        vector<ll> arr;
        for (ll i = 0; i < n; i++) {
            cin >> aux;
            arr.push_back(aux);
        }
        sort(arr.begin(), arr.end());

        cout << (n-1) * (arr[n-1] - arr[0]) << "\n";
    }

    return 0;
}