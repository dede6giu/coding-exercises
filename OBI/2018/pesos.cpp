#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long int> values;
    long long int n, aux;
    bool valid = true;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        values.push_back(aux);
    }

    sort(values.begin(), values.end());

    if (values[0] <= 8) {
        for (int i = 1; i < n; i++) {
            if (values[i] - values[i-1] > 8) {
                valid = false;
                break;
            }
        }
    } else {
        valid = false;
    }

    if (valid) {
        cout << "S" << "\n";
    } else {
        cout << "N" << "\n";
    }

    return 0;
}