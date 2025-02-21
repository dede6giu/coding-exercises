#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool solve(ll n, ll k, ll q) {
    ll aux = q;
    ll i = 0;
    while (n > 0 && aux > 0) {
        aux = q / pow(k, i);
        n -= aux;
        i++;
    }
    if (n <= 0) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, k;
    cin >> n >> k;

    ll l = 1, r = n;
    ll vmin = n;
    while (l != r) {
        ll mid = (l+r+1)/2;
        if (solve(n, k, mid)) {
            r = mid-1;
            vmin = mid;
        } else {
            l = mid;
        }
    }

    cout << vmin << "\n";

    return 0;
}