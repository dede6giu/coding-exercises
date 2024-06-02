#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, aux0, aux1, aux2;
    int q;
    vector<vector<bool>> seats;
    bool possible = true;

    cin >> n >> m;
    cin >> q;

    seats = vector(n, vector<bool>(m, false));

    for (int i = 0; i<q; i++) {
        cin >> aux0 >> aux1 >> aux2;
        aux0--;
        aux1--;
        for (int j = aux1; j < aux1 + aux2; j++) {
            try {
                if (seats[aux0][j]) {
                    possible = false;
                    break;
                }
            } catch(exception) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "aomossar\n";
            for (int j = aux1; j < aux1 + aux2; j++) seats[aux0][j] = true;
        } else {
            cout << ":(\n";
            possible = true;
        }
    }

    return 0;
}