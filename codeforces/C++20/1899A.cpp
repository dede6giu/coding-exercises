#include <iostream>
using namespace std;

int main() {
    int n, x = 0;

    // this defines which number Vanya wins with. in the problem, winN = 3
    // Vanya will win if and only if the starting number (x) is a multiple
    // of winN +- 1. otherwise, Vova will always win
    const int winN = 3;

    cin >> n;

    while (n > 0) {
        cin >> x;

        if (x % winN == 1 or x % winN == winN-1) {
            cout << "First" << "\n";
        } else {
            cout << "Second" << "\n";
        }

        n--;
    }

    return 0;
}