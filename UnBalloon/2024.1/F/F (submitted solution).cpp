#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, aux, aux2, aux3, op=0;
    vector<int> CRCH, amnt;
    stack<int> stac;
    bool change = false;

    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        CRCH.push_back(aux-1);
    }
    amnt = vector(n, 0);

    aux = 0;
    while (aux < n) {
        op = 0;
        aux2 = aux;
        while (aux2 != CRCH[aux2]) {
            change = true;
            aux3 = CRCH[aux2];
            CRCH[aux2] = CRCH[CRCH[aux2]];
            CRCH[aux3] = aux3;
            op++;
            stac.push(aux3);
        }
        if (change) {
            stac.push(aux2);
            change = false;
        }
        aux++;
        while (!stac.empty()) {
            amnt[stac.top()] = op;
            stac.pop();
        }
    }

    for (int i = 0; i<q; i++) {
        cin >> aux;
        cout << amnt[aux-1] << "\n";
    }
    
    return 0;
}