#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, A, N;

    cin >> D >> A >> N;

    if (N < 16) {
        D += A*(N-1);
    } else {
        D += A*14;
    }

    cout << (32 - N)*D << "\n";

    return 0;
}