#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, a, b, c = 0;
    vector<int> sequence = {};

    cin >> n;

    while (n > 0) {
        cin >> a >> b >> c;
        sequence.push_back(a);
        sequence.push_back(b);
        sequence.push_back(c);

        sort(sequence.begin(), sequence.end());

        cout << sequence[1] << "\n";

        sequence.clear();
        n--;
    }

    return 0;
}