#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;

    ll l = 1, r = n;
    while (r>l) {
        ll mid = (l+r)/2;
        ll tt = n;
        ll ac = 0;
        while (true) {
            if (tt >= mid) {
                ac += mid; tt -= mid;
            } else {
                ac += tt; tt = 0;
                break;
            }
            tt -= (tt/10);
        }

        if (ac >= n/2 + n%2) {
            r = mid;
        } else {
            l = mid+1;
        }
    }
    cout << r << "\n";

    return 0;
}