#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<string> g;
vector<vector<bool>> vis;
ll glbK;

void dfs(ll i, ll j) {
    if (i == 0 && j == 0) return;
    if (glbK == 0) return;
    if (vis[i][j]) return;
    vis[i][j] = true;

    if (g[i+1][j] == '.') dfs(i+1, j);
    if (glbK == 0) return;
    if (g[i-1][j] == '.') dfs(i-1, j);
    if (glbK == 0) return;
    if (g[i][j+1] == '.') dfs(i, j+1);
    if (glbK == 0) return;
    if (g[i][j-1] == '.') dfs(i, j-1);
    if (glbK == 0) return;

    g[i][j] = 'X';
    glbK--;
    return;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;
    glbK = k;

    string top1 = "";
    vector<bool> top2(m+2, 1);
    for (ll i = 0; i < m+2; i++) {
        top1 += "#";
    }
    g.push_back(top1);
    vis.push_back(top2);
    for (ll i = 0; i < n; i++) {
        string line = "#";
        string aux;
        cin >> aux;
        line += aux;
        line += "#";
        g.push_back(line);
        vector<bool> aux2(m+2, 0);
        vis.push_back(aux2);
    }
    g.push_back(top1);
    vis.push_back(top2);

    ll si = 0, sj = 0;
    for (ll i = 1; i < n+1; i++) {
        bool found = false;
        for (ll j = 1; j < m+1; j++) {
            if (g[i][j] == '.') {
                si = i; sj = j;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    dfs(si, sj);

    for (ll i = 1; i < n+1; i++) {
        for (ll j = 1; j < m+1; j++) {
            cout << g[i][j];
        }
        cout << "\n";
    }

    return 0;
}