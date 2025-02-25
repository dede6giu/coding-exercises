#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ull n, x;
        cin >> n >> x;
        vector<ull> a;
        ull mmex = 1;
        ull aux = x;
        while (aux % 2) {
            mmex <<= 1;
            aux >>= 1;
        }
        mmex--;
        ull curor = 0;
        for (ull i = 0; i < n; i++) {
            if (i < mmex) {
                a.push_back(i);
                curor |= i;
            } else {
                a.push_back(mmex);
                curor |= mmex;
            }
        }
        if (curor != x) {
            if (!a.empty()) a.pop_back();
            a.push_back(x);
        }
        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}