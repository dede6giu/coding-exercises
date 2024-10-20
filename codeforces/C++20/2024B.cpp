#include <bits/stdc++.h>
using namespace std;
    
int main() {
    long long int t, k, n, aux, cnt = 0;
    cin >> t;
    
    while (t > 0) {
        cin >> n >> k;
        vector<long long int> slots;
        cnt = 0;
    
        for (long long int i = 0; i < n; i++) {
            cin >> aux;
            slots.push_back(aux);
        }
        sort(slots.begin(), slots.end());
        
        aux = 0;
        while (true) {
            if (k <= slots[aux] * (n-aux)) {
                cnt += k;
                break;
            } else {
                k -= slots[aux];
                cnt += slots[aux] + 1;
                aux++;
            }
        }
    
        cout << cnt << "\n";
    
        t--;
    }
    return 0;
}