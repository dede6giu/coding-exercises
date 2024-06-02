#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, strsize, auxserv = 0, iterations = 0;
    string icec;
    char current = 'A';
    vector<char> result;

    cin >> n;
    cin >> icec;

    strsize = icec.length();

    int i = 0;
    while (i < strsize) {
        if (auxserv == 5) {
            result.push_back('L');
            auxserv = 0;
            iterations++;
            continue;
        }

        if (icec[i] == current) {
            result.push_back('.');
            i++;
            auxserv++;
            iterations++;
        } else {
            current = icec[i];
            result.push_back(current);
            result.push_back('.');
            i++;
            auxserv++;
            iterations += 2;
        }
    }

    if (auxserv != 0) {
        result.push_back('L');
        iterations++;
    }

    cout << iterations << "\n";

    for (i = 0; i < iterations; i++) {
        cout << result[i];
    }
    
    cout << "\n";

    return 0;
}