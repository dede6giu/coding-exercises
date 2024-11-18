#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    long long t;

    cin >> t;

    while(t--) {
        long long n, aux;
        cin >> n;
        vector<long long> A, B;

        for (int i = 0; i < n; i++) {
            cin >> aux;
            A.push_back(aux);
        }
        for (int i = 0; i < n; i++) {
            cin >> aux;
            B.push_back(aux);
        }

        if (A == B) {
            cout << "Bob" << "\n";
        } else {
            reverse(B.begin(), B.end());
            if (A == B) {
                cout << "Bob" << "\n";
            } else {
                cout << "Alice" << "\n";
            }
        }
    }

    return 0;
}
