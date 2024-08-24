#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2*1e5;
int segtree[4*MAXN];

void build(vector<int> &a, int vertex, int tl, int tr) {
    if (tl == tr) {
        segtree[vertex] = a[tl];
        return;
    }

    int tm = (tl+tr)/2;

    build(a, vertex*2, tl, tm);
    build(a, vertex*2+1, tm+1, tr);

    segtree[vertex] = min(segtree[vertex*2], segtree[vertex*2+1]);
}

int min_query(int vertex, int tl, int tr, int l, int r) {
    if (l > r) return 1e9;
    if (tl > r || tr < l) return 1e9;
    if (tl == l && tr == r) return segtree[vertex];

    int tm = (tl+tr)/2;
    return min(min_query(vertex*2, tl, tm, l, min(r, tm)),
             min_query(vertex*2+1, tm+1, tr, max(l, tm+1), r));
}

void update(int vertex, int tl, int tr, int pos, int newval) {
    if (tl == tr) {
        segtree[vertex] = newval;
        return;
    }

    int tm = (tl+tr) / 2;
    if (pos <= tm) {
        update(vertex*2, tl, tm, pos, newval);
    } else {
        update(vertex*2+1, tm+1, tr, pos, newval);
    }

    segtree[vertex] = min(segtree[vertex*2], segtree[vertex*2+1]);
}

int main() {
    int n, q, a, b, c;
    cin >> n >> q;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    build(v, 1, 0, n-1);

    while (q > 0) {
        cin >> c >> a >> b;
        if (c == 1) {
            update(1, 0, n-1, a-1, b);
        } else {
            cout << min_query(1, 0, n-1, a-1, b-1) << "\n";
        }
        q--;
    }

    return 0;
}
