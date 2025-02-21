#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        vector<int> vv(26, 0);
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            vv[s[i] - 'a'] += 1;
        }

        int amt = 0;
        for (int i = 0; i < 26; i++) {
            switch (vv[i]) {
                default:
                    amt += 1;
                case 1:
                    amt += 1;
                case 0:
                    break;
            }
        }

        cout << amt / 2 << "\n";
    }

    return 0;
}