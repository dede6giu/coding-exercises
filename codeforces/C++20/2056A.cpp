#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;
        
        ll perim = 4*m*n;
        ll aux;
        cin >> aux; cin >> aux; n--;
        while (n--) {
            cin >> aux;
            perim -= 2*(m-aux);
            cin >> aux;
            perim -= 2*(m-aux);
        }

        cout << perim << "\n";
    }

    return 0;
}