#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        string s, r = "";
        cin >> n >> s;
        for (int i = 0; i < 2*n - 1; i += 2) {
            r += s[i];
        }
        cout << r << "\n";
    }

    return 0;
}