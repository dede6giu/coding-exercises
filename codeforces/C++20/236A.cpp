#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    unordered_set<char> c;

    for (ll i = 0; i < s.size(); i++) {
        c.insert(s[i]);
    }

    if (c.size() % 2) {
        cout << "IGNORE HIM!" << "\n";
    } else {
        cout << "CHAT WITH HER!" << "\n";
    }

    return 0;
}