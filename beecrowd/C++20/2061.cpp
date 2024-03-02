#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m = 0;
    string action;

    cin >> n >> m;

    while (m != 0) {
        cin >> action;

        if (action == "fechou") {
            n++;
        } else {
            n--;
        }

        m--;
    }

    cout << n << "\n";

    return 0;
}