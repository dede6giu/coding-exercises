#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string tec1, tec2, s;
    cin >> tec1 >> tec2 >> s;

    vector<pair<char,int>> t1a, t1b;
    vector<char> t2;

    for (int i = 0; i < 26; i++) {
        char curr = tec1[i];
        t1a.push_back(pair(curr, i));
        t1b.push_back(pair('A' + abs('a' - curr), i));
    }
    for (int i = 0; i < 26; i++) {
        t2.push_back(tec2[i]);
    }
    sort(t1a.begin(), t1a.end());
    sort(t1b.begin(), t1b.end());

    for (int i = 0; i < s.size(); i++) {
        if ((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z')) {
            cout << s[i];
        } else {
            if (s[i] >= 'a' && s[i] <= 'z') {
                int curr = t1a[abs(s[i] - 'a')].second;
                cout << t2[curr];
            } else {
                int curr = t1a[abs(s[i] - 'A')].second;
                cout << (char)('A' + (t2[curr] - 'a'));
            }
        }
    }
    cout << "\n";

    return 0;
}