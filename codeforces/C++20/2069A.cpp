#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        bool possible = true;
        vector<bool> b;
        for (ll i = 0; i < n-2; i++) {
            bool aux;
            cin >> aux;
            b.push_back(aux);
        }

        for (ll i = 1; i < n-3; i++) {
            if (b[i-1] && !b[i] && b[i+1]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << "\n";
    }

    return 0;
}