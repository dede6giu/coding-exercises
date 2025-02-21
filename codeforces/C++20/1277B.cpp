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
        set<ll> nums;

        for (ll i = 0; i < n; i++) {
            ll aux;
            cin >> aux;
            while (!(aux % 2) && nums.count(aux) == 0) {
                nums.insert(aux);
                aux /= 2;
            }
        }

        cout << nums.size() << "\n";
    }

    return 0;
}