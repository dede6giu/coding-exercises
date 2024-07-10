#include <bits/stdc++.h>
using namespace std;

int ans = 0;
const int MAX = 2e5+5;
vector<int> g[MAX], visited(MAX);

int dfs(int vertex, int h = 0) {
    visited[vertex] = 1;
    
    int maior = h;
    int segun = 0;

    for (int v: g[vertex]) if (!visited[v]) {
        int temp = dfs(v, h+1);
        if (temp >= maior) {
            segun = maior;
            maior = temp;
        } else if (temp > segun) {
            segun = temp;
        }
    }

    ans = max(ans, maior + segun - 2*h);

    return maior;
}

int main() {

    int n, aux, aux2;
    cin >> n;

    for (int i = 0; i < n-1; i++) {
        cin >> aux >> aux2;
        g[aux-1].push_back(aux2-1);
        g[aux2-1].push_back(aux-1);
    }

    dfs(0);
    
    cout << ans << "\n";

    return 0;
}
