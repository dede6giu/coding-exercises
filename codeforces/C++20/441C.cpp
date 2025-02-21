#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<vector<pair<ll,ll>>> g;
vector<vector<bool>> vis;
stack<ll> kquan;

void lfs(ll i, ll j) {
    while (!kquan.empty()) {
        vector<pair<ll,ll>> line;
        ll amnt = kquan.top();
        kquan.pop();

        if (!vis[i][j]) {
            vis[i][j] = true;
            amnt--;
            line.push_back(pair(i, j));
        }
        while (amnt > 0) {
            if (!vis[i][j+1]) {
                j += 1;
                vis[i][j] = true;
                amnt--;
                line.push_back(pair(i, j));
                continue;
            }
            if (!vis[i+1][j]) {
                i += 1;
                vis[i][j] = true;
                amnt--;
                line.push_back(pair(i, j));
                continue;
            }
            if (!vis[i][j-1]) {
                j -= 1;
                vis[i][j] = true;
                amnt--;
                line.push_back(pair(i, j));
                continue;
            }
            if (!vis[i-1][j]) {
                i -= 1;
                vis[i][j] = true;
                amnt--;
                line.push_back(pair(i, j));
                continue;
            }
        }
        g.push_back(line);
    }

    return;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<bool> top2(m+2, true);
    vector<bool> line2(m+2, false); line2[0] = true; line2[m+1] = true;
    vis.push_back(top2);
    for (ll i = 0; i < n; i++) {
        vis.push_back(line2);
    }
    vis.push_back(top2);

    ll aux = n*m;
    for (ll i = k; i > 0; i--) {
        if (i == 1) {
            kquan.push(aux);
        } else {
            kquan.push(aux / i);
            aux -= (aux / i);
        }
    }
    
    lfs(1, 1);

    for (ll i = 0; i < k; i++) {
        vector<pair<ll,ll>> line = g[i];
        ll aux = line.size();
        cout << aux << " ";
        for (ll j = 0; j < aux; j++) {
            cout << line[j].first << " ";
            cout << line[j].second << " ";
        }
        cout << "\n";
    }

    return 0;
}