#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, s, aux, cnt;
    cin >> n >> s;
    priority_queue<ll> cand;

    for (ll i = 0; i < n-1; i++) {
        cin >> aux;
        cand.push(aux);
    }

    cnt = 0;
    while (cand.top() >= s) {
        s++; cnt++;
        aux = cand.top() - 1;
        cand.pop();
        cand.push(aux);
    }

    cout << cnt << "\n";

    return 0;
}