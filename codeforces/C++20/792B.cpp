#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, k, aux;
    cin >> n >> k;
    queue<ll> a;
    vector<ll> kids;

    for (ll i = 0; i < k; i++) {
        cin >> aux;
        a.push(aux);
    }

    for (ll i = 1; i <= n; i++) {
        kids.push_back(i);
    }

    aux = 0;
    while (k--) {
        ll curr = a.front();
        a.pop();
        aux = (curr + aux) % (n);
        cout << *(kids.begin() + aux) << " ";
        kids.erase(kids.begin() + aux);
        n--;
        aux %= n;
    }

    cout << "\n";

    return 0;
}