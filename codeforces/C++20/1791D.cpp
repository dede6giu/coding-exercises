#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, siz;
        string s;
        cin >> n;
        cin >> s;
        unordered_set<char> a, b;
        vector<ll> aN, bN;
        siz = s.size();
        for (ll i = 0; i < siz-1; i++) {
            a.insert(s[i]);
            aN.push_back((ll)a.size());
        }
        for (ll i = siz-1; i > 0; i--) {
            b.insert(s[i]);
            bN.push_back((ll)b.size());
        }
        ll bigg = 0;
        siz = aN.size();
        for (ll i = 0; i < siz; i++) {
            if (aN[i] + bN[siz-1 - i] > bigg) {
                bigg = aN[i] + bN[siz-1 - i];
            }
        }
        cout << bigg << "\n";
    }    

    return 0;
}