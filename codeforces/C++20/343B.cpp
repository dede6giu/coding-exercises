#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    stack<char> l;
    cin >> s;

    for (ll i = 0; i < s.size(); i++) {
        if (l.empty()) {
            l.push(s[i]);
            continue;
        }
        if (s[i] == l.top()) {
            l.pop();
        } else {
            l.push(s[i]);
        }
    }
    if (l.empty()) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}