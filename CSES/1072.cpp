#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    for (long long int t = 1; t <= n; t++) {
        long long int cnt = t*t * (t*t - 1) / 2;
        if (t >= 4) {
            cnt -= (10 + 4*(t-4)) * (t-2);
            cnt -= 4 + 2*(t-4);
        } else if (t == 3) {
            cnt -= 6 + 2;
        }
        cout << cnt << "\n";
    }
}