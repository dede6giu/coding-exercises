#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long n, l, r, aux, cnt = 0;
        cin >> n >> l >> r;
        vector<long long> arr;

        for (long long i = 0; i < n; i++) {
            cin >> aux;
            arr.push_back(aux);
        }
        sort(arr.begin(), arr.end());

        vector<long long>::iterator itr = arr.begin();
        while (itr != arr.end()) {
            long long jl = lower_bound(itr+1, arr.end(), l - *itr) - arr.begin();
            long long jr = upper_bound(itr+1, arr.end(), r - *itr) - arr.begin();
            if (jr - jl > 0) {
                cnt += (jr - jl);
            }
            itr++;
        }

        cout << cnt << "\n";
    }

    return 0;
}