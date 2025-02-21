#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        string s, res = "";
        cin >> s;
        queue<char> odd, even;

        for (ll i = 0; i < s.size(); i++) {
            if ((s[i] - '0') % 2) {
                odd.push(s[i]);
            } else {
                even.push(s[i]);
            }
        }

        while (!odd.empty() || !even.empty()) {
            if (odd.empty()) {
                res += even.front();
                even.pop();
                continue;
            } else if (even.empty()) {
                res += odd.front();
                odd.pop();
                continue;
            }
            if (odd.front() > even.front()) {
                res += even.front();
                even.pop();
            } else {
                res += odd.front();
                odd.pop();
            }
        }

        cout << res << "\n";
    }

    return 0;
}