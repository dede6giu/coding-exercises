#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr;
        arr.push_back(n-1);
        arr.push_back(n);

        ll odd = (k+1) % 2;

        for (ll i = 0; i < n-2; i++) {
            arr.push_back(n-odd);
        }
        reverse(arr.begin(), arr.end());

        for (ll i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}