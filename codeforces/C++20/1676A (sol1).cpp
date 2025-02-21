#include <iostream>
using namespace std;

int main() {
    int n, s, e = 0;
    string ticket = "";

    cin >> n;

    while (n > 0) {
        cin >> ticket;
        s = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        e = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');
        
        if (s == e) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

        n--;
    }
    return 0;
}