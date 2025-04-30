#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, m, a;
    cin >> n >> m >> a;

    ll nn = n / a;
    ll mm = m / a;

    if (n%a > 0) nn++;
    if (m%a > 0) mm++;

    cout << nn*mm << "\n";

    return 0;
}