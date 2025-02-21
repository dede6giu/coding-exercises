#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<vector<char>> g;

void dfs(ll a, ll b, ll n, ll m, bool black = false) {

    if (g[a][b] != '.') return;

    if (black) {
        g[a][b] = 'B';
    } else {
        g[a][b] = 'W';
    }

    if (a+1 < n) dfs(a+1, b, n, m, !black);
    if (a > 0)   dfs(a-1, b, n, m, !black);
    if (b+1 < m) dfs(a, b+1, n, m, !black);
    if (b > 0)   dfs(a, b-1, n, m, !black);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i < n; i++) {
        string aux;
        cin >> aux;
        g.push_back(vector<char>());
        for (ll j = 0; j < m; j++) {
            g[i].push_back(aux[j]);
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (g[i][j] == '.') dfs(i, j, n, m);
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cout << g[i][j];
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}