#include <bits/stdc++.h>
using namespace std;
    
#define ll long long
    
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    ll t;
    cin >> t;
    
    while (t--) {
        string s, nn = "";
        cin >> s;
        reverse(s.begin(), s.end());
        for (ll i = 0; i < s.size(); i++) {
            if (s[i] == 'p') {
                nn += "q";
            } else if (s[i] == 'q') {
                nn += "p";
            } else {
                nn += "w";
            }
        }
        cout << nn << "\n";
    }
    
    return 0;
}