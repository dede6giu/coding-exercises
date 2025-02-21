#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;
    
    while (t--) {
        unsigned long long n, res;
        cin >> n;
        res = pow(2, floor(log2(n))) - 1;
        cout << res << "\n";
    }

    return 0;
}