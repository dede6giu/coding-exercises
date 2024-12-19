#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, i = 0;
        cin >> n;
        string res = "";

        while (i < n/2) {
            res += "0";
            i++;
        }
        if (i != n) {
            res += "1";
            i++;
        }
        while (i < n) {
            res += "0";
            i++;
        }

        cout << res << "\n";
    }

    return 0;
}