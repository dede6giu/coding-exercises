#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t, a1, a2, b1, b2, aux;
    cin >> t;

    while (t--) {
        aux = 0;
        cin >> a1 >> a2 >> b1 >> b2;
        vector<int> sn, sl;
        sn.push_back(a1);
        sn.push_back(a2);
        sl.push_back(b1);
        sl.push_back(b2);

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (sn[i] > sl[j] && sn[(i+1) % 2] >= sl[(j+1) % 2]) aux++;
                if (sn[i] == sl[j] && sn[(i+1) % 2] > sl[(j+1) % 2]) aux++;
            }
        }

        cout << aux << "\n";
    }

    return 0;
}