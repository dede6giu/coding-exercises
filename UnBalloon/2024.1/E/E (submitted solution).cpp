#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, aux, aux2, op = 0;
    vector<long long int> gallo;
    bool possible = true;
    vector<long long int> results;

    cin >> n;

    for (int i = 0; i<n; i++) {
        cin >> aux;
        gallo.push_back(aux);
    }

    for (int i = 0; i < n / 2; i++) {
        cin >> aux >> aux2;
        aux--;
        aux2--;
        if ((abs(gallo[aux] - gallo[aux2])) % 2 != 0) {
            possible = false;
        }
        if (possible and (gallo[aux2] - gallo[aux]) != 0) {
            results.push_back(aux+1);
            results.push_back((gallo[aux2] - gallo[aux]) / 2);
            op++;
        }
    }

    if (!possible) {
        cout << "-1\n";
    } else {
        cout << op << "\n";
        for (int i = 0; i < results.size(); i += 2) {
            cout << results[i] << " " << results[i+1] << "\n";
        }
    }
    
    return 0;
}