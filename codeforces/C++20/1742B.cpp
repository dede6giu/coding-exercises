#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, aux;
        vector<ll> arr;
        cin >> n;

        for (ll i = 0; i < n; i++) {
            cin >> aux;
            arr.push_back(aux);
        }

        sort(arr.begin(), arr.end());

        bool state = true;
        for (ll i = 1; i < n; i++) {
            if (arr[i] <= arr[i-1]) {
                state = false;
                break;
            }
        }
        if (state) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}