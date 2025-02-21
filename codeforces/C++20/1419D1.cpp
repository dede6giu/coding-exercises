#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long n, aux;
    cin >> n;
    vector<int> sph;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        sph.push_back(aux);
    }
    sort(sph.begin(), sph.end());
    reverse(sph.begin(), sph.end());

    if (n % 2) {
        cout << n/2 << "\n";
        int i = 0;
        cout << sph[i] << " ";
        while (i < n/2) {
            cout << sph[(n-1) - i] << " ";
            i++;
            cout << sph[i] << " ";
        }
    } else {
        cout << (n-1)/2 << "\n";
        int i = 0;
        while (i < n/2) {
            cout << sph[i] << " ";
            cout << sph[(n-1) - i] << " ";
            i++;
        }
    }

    return 0;
}