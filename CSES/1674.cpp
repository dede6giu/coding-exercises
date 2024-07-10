#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5+5;
vector<int> g[MAX], visited(MAX), answer(MAX, 0);

void dfs(int vertex) {
    visited[vertex] = 1;

    for (int v: g[vertex]) if (!visited[v]) {
        dfs(v);
        answer[vertex] += answer[v] + 1;
    }

    return;
}

int main() {

    int n, aux;
    cin >> n;

    for (int i = 1; i < n; i++) {
        cin >> aux;
        g[aux-1].push_back(i);
    }

    dfs(0);
    
    for (int i = 0; i < n; i++) {
        cout << answer[i];
        cout << ' ';
    }
    cout << '\n';

    return 0;
}
