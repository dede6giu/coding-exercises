#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long int n, aux, cur = 1000000;
        cin >> n;
        vector<int> s;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            s.push_back(aux);
        }
        sort(s.begin(), s.end());

        for (int i = 1; i < n; i++) {
            if (s[i] - s[i-1] < cur) cur = s[i] - s[i-1];
        }

        cout << cur << "\n";
    }

    return 0;
}