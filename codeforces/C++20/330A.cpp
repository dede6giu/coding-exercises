#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int r, c;
    cin >> r >> c;
    set<int> x, y;

    for (int i = 0; i < r; i++) {
        string linha;
        cin >> linha;
        for (int j = 0; j < c; j++) {
            if (linha[j] == 'S') {
                x.insert(j);
                y.insert(i);
            }
        }
    }

    cout << r*c - x.size() * y.size();

    cout << "\n";

    return 0;
}