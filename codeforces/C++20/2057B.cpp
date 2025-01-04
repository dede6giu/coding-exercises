#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k, aux;
        vector<ll> arr;
        set<ll> crr;
        priority_queue<ll, vector<ll>, greater<ll>> brr;
        cin >> n >> k;

        for (ll i = 0; i<n; i++) {
            cin >> aux;
            arr.push_back(aux);
            crr.insert(aux);
        }
        sort(arr.begin(), arr.end());

        ll cur = arr[0], cnt = 0;
        for (ll i = 0; i<n; i++) {
            if (cur == arr[i]) {
                cnt++;
            } else {
                brr.push(cnt);
                cur = arr[i];
                cnt = 1;
            }
        }
        brr.push(cnt);

        aux = crr.size();
        while (k > 0 && aux > 1) {
            if (brr.top() <= k) {
                aux--;
                k -= brr.top();
                brr.pop();
            } else {
                break;
            }
        }
        cout << aux << "\n";
    }

    return 0;
}