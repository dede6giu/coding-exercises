#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll a, b, aux;
        cin >> a >> b;
        queue<ll> piles;
        piles.push(a);
        bool state = false;
        while (!piles.empty()) {
            aux = piles.front();
            piles.pop();
            if (aux == b) {
                state = true;
                break;
            }
            if (aux < b) continue;
            if (aux % 3 == 0) {
                piles.push(aux / 3);
                piles.push(2 * aux / 3);
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