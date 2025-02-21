#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    const string alp = "zyxwvutsrqponmlkjihgfedcba";
    int t;
    cin >> t;

    while (t--) {
        string s;
        set<char> cc;
        bool possible = true;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            cc.insert(s[i]);
        }
        if (cc.size() != s.size()) {
            cout << "NO" << "\n";
            continue;
        }

        int ss = 0, se = s.size() - 1;
        for (int i = 0; i < 26; i++) {
            if (s[ss] == alp[i] || s[se] == alp[i]) {
                if (s.size() < 26 - i) {
                    possible = false;
                    break;
                }
                break;
            }
        }
        if (!possible) {
            cout << "NO" << "\n";
            continue;
        }

        bool started = false;
        for (int i = 26 - s.size(); i < 26; i++) {
            if (s[ss] == alp[i]) {
                started = true;
                ss++;
                continue;
            }
            if (s[se] == alp[i]) {
                started = true;
                se--;
                continue;
            }
            possible = false;
            break;
        }
        if (possible) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}