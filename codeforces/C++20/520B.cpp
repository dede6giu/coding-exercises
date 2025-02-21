#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll cnt = 0;
    while (n != m) {
        if (m > n && (m%2 == 0)) {
            m /= 2;
            cnt++;
        } else {
            m++;
            cnt++;
        }
    }
    cout << cnt << "\n";

    return 0;
}