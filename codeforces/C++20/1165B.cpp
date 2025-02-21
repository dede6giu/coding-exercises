#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long n, aux;
    vector<long long> c;
    cin >> n;

    for (long long i = 0; i<n; i++) {
        cin >> aux;
        c.push_back(aux);
    }
    sort(c.begin(), c.end());

    long long d = 1;
    aux = 0;
    while (aux < n) {
        if (c[aux] >= d) {
            d++;
            aux++;
        } else if (c[aux] < d) {
            aux++;
        }
    }

    cout << d-1 << "\n";

    return 0;
}