#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long n, aux, cnt = 0, sml;
        cin >> n;
        cin >> aux;
        cnt = aux;
        sml = aux;
        for (long long i = 1; i<n; i++) {
            cin >> aux;
            sml = aux < sml ? aux : sml;
            cnt += aux;
        }
        cnt -= sml * n;
        cout << cnt << "\n";
    }

    return 0;
}