#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s, h = "hello", H = "HELLO";
    cin >> s;
    bool state = false;
    int a = 0;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == h[a] || s[i] == H[a]) a++;
        if (a == 5) {
            state = true;
            break;
        }
    }
    if (a == 5) state = true;
    if (state) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}