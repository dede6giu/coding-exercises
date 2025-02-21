#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ull a, b;
        cin >> a >> b;
        ull x = a & b;
        ull res = (a^x) + (b^x);
        cout << res << "\n";
    }

    return 0;
}