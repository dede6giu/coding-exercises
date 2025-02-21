#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long n, aux, last, cnt;
    vector<long long> sushi, results;
    bool valid = true;
    cin >> n;

    cin >> last; cnt = 1;
    for (long long i = 1; i<n; i++) {
        cin >> aux;
        if (aux == last) {
            cnt++;
        } else {
            sushi.push_back(cnt);
            last = aux;
            cnt = 1;
        }
        if (i==n-1) sushi.push_back(cnt);
    }

    n = sushi.size();

    for (long long i = 1; i<n; i++) {
        if (sushi[i] > sushi[i-1]) {
            results.push_back(sushi[i-1]*2);
        } else {
            results.push_back(sushi[i]*2);
        }
    }

    last = results[0];
    n = results.size();
    for (long long i = 0; i<n; i++) {
        if (results[i] > last) {
            last = results[i];
        }
    }

    cout << last << "\n";

    return 0;
}