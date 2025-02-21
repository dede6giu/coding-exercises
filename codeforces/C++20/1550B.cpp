#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        
        string num;
        cin >> num;

        if (b == 0) {
            cout << a*n << "\n";
            continue;
        }

        if (b > 0) {
            cout << (a+b)*n << "\n";
            continue;
        }

        long long changes = 0;
        bool lastZ = num[0] == '0' ? true : false;
        for (int i = 0; i < num.size(); i++) {
            if (lastZ && num[i] == '1') {
                changes++;
                lastZ = false;
            } else if (!lastZ && num[i] == '0') {
                changes++;
                lastZ = true;
            }
        }

        if (changes % 2) {
            cout << a*n + b*((changes+1)/2 + 1) << "\n";
        } else {
            cout << a*n + b*(changes/2 + 1) << "\n";
        }
    }

    return 0;
}