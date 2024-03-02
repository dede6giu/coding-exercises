#include <iostream>
using namespace std;

int main() {
    int n, s, day, low = 0;

    cin >> n >> s;

    low = s;

    while (n != 0) {
        cin >> day;

        s += day;

        if (s < low) {
            low = s;
        }

        n--;
    }

    cout << low << "\n";

    return 0;
}