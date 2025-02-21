#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long a, b, t=0;
    cin >> a >> b;

    while (!(a > b)) {
        t++;
        a *= 3;
        b *= 2;
    }

    cout << t << "\n";

    return 0;
}