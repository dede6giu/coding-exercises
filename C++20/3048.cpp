#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, current, aux = 0;
    vector<int> seq;
    vector<int>::iterator itr;

    cin >> n;

    while (n != 0) {
        cin >> aux;
        seq.push_back(aux);
        n--;
    }

    aux = 0;

    for (itr = seq.begin(); itr < seq.end(); itr++) {
        if (current != *itr) {
            current = *itr;
            aux++;
        }
    }

    cout << aux << "\n";

    return 0;
}