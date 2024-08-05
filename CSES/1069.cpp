#include <bits/stdc++.h>
using namespace std;

int main() {
    string dna;
    char cur;
    int len, max=0, aux=0;
    cin >> dna;
    len = dna.length();
    cur = dna[0];
    for (int i = 0; i < len; i++) {
        if (dna[i] == cur) {
            aux++;
        } else {
            max = aux > max ? aux : max;
            aux = 1;
            cur = dna[i];
        }
    }
    max = aux > max ? aux : max;
    cout << max;
    return 0;
}