#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long int n, aux, cur = 1000000;
        bool win = true;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            a.push_back(aux);
        }
        sort(a.begin(), a.end());

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] > 1) {
                win = false;
                break;
            }
        }

        if (win) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}