#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long n, aux, neg=0, sum=0;
        bool hasZero = false;
        vector<long long> nu;
        cin >> n;

        for (long long i = 0; i<n; i++) {
            cin >> aux;
            if (aux < 0) {
                neg++;
            }
            if (aux == 0) {
                hasZero = true;
            }
            nu.push_back(abs(aux));
        }
        sort(nu.begin(), nu.end());
        
        if (neg % 2 == 0 || hasZero) {
            for (long long i = 0; i<n; i++) {
                sum += nu[i];
            }
        } else {
            sum -= nu[0];
            for (long long i = 1; i<n; i++) {
                sum += nu[i];
            }
        }

        cout << sum << "\n";
        
    }

    return 0;
}