#include <bits/stdc++.h>
using namespace std;
    
#define ll long long
    
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, aux;
        cin >> n;
        vector<ll> arr;
        stack<ll> ext;
        vector<bool> hat (n+1, 0);
        hat[0] = true;
    
        for (ll i = 0; i < n; i++) {
            cin >> aux;
            hat[aux] = true;
            arr.push_back(aux);
        }
    
        for (ll i = 0; i < n+1; i++) {
            if (!hat[i]) ext.push(i);
        }
    
        hat = vector<bool>(n+1, 0);
        for (ll i = 0; i < n; i++) {
            if (!hat[arr[i]]) {
                hat[arr[i]] = true;
                cout << arr[i] << " ";
            } else {
                aux = ext.top();
                ext.pop();
                cout << aux << " ";
            }
        }
    
        cout << "\n";
    }
    
    return 0;
}