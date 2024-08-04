#include <bits/stdc++.h>
using namespace std;

void threeplusone(long long x) {
    cout << x;
    if (x == 1) {
        return;
    } else if (x % 2 == 0) {
        cout << " ";
        return threeplusone(x/2);
    } else {
        cout << " ";
        return threeplusone(3*x + 1);
    }
}

int main() {
    long long n;
    cin >> n;
    threeplusone(n);
    return 0;
}