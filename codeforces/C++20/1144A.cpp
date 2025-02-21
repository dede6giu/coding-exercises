#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        string s;
        vector<char> h;
        set<char> hh;
        cin >> s;
        long long n = s.size();

        for (long long i = 0; i<n; i++) {
            h.push_back(s[i]);
            hh.insert(s[i]);
        }

        if (hh.size() != n) {
            cout << "NO" << "\n";
            continue;
        }

        sort(h.begin(), h.end());
        bool valid = true;
        for (long long i = 1; i < n; i++) {
            if (!valid) break;
            if (h[i] - h[i-1] != 1) {
                valid = false;
            }
        }

        if (valid) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}