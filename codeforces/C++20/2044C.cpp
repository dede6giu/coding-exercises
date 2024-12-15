#include <bits/stdc++.h>
using namespace std;
    
#define ll long long
    
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll m, a, b, c, As, Bs, Cs, monk = 0;
        cin >> m >> a >> b >> c;
        As = m; Bs = m;
        if (As >= a) {
            monk += a;
            As -= a;
        } else {
            monk += As;
            As = 0;
        }
        if (Bs >= b) {
            monk += b;
            Bs -= b;
        } else {
            monk += Bs;
            Bs = 0;
        }
        Cs = As + Bs;
        if (Cs >= c) {
            monk += c;
            Cs -= c;
        } else {
            monk += Cs;
            Cs = 0;
        }
        cout << monk << "\n";
    }
    
    return 0;
}