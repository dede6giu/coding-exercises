#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    long long n, m, a, auxn, auxm;

    cin >> n >> m >> a;

    auxn = n / a;
    if (n % a != 0) {
        auxn++;
    }
    auxm = m / a;
    if (m % a != 0) {
        auxm++;
    }

    cout << auxn * auxm << "\n";

    return 0;
}
