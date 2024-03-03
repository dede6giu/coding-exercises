#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    string cmd = "";

    cin >> n;

    while (n > 0) {
        cin >> cmd;

        if (cmd[0] == '-' or cmd[2] == '-') {
            x--;
        } else {
            x++;
        }

        n--;
    }

    cout << x << "\n";

    return 0;
}