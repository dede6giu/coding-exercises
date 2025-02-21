#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2 == 1) {
        cout << "No" << "\n";
    } else {
        ll scope = 0;
        bool negHit = false, state = true;

        for (ll i = 0; i < s.size(); i++) {
            if (s[i] == '(') scope++;
            if (s[i] == ')') scope--;
            if (negHit && scope < -1) {
                state = false;
                break;
            }
            if (scope == -1) negHit = true;
        }
        if (scope != 0) state = false;

        if (state) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}