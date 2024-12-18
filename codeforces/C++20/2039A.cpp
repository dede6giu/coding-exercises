#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cout << 2*i + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}