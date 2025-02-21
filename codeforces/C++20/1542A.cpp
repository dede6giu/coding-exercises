#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, aux, im = 0;
        cin >> n;

        for (ll i = 0; i < 2*n; i++) {
            cin >> aux;
            if (aux%2) im++;
        }

        if (n == im) {
            cout << "Yes";
        } else {
            cout << "No";
        }
        cout << "\n";
    }

    return 0;
}