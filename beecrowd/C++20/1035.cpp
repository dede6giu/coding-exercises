#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, x = 0;

    cin >> A >> B >> C >> D;

    if (B > C) {
        x++;
    }

    if (D > A) {
        x++;
    }

    if (C+D > A+B) {
        x++;
    }

    if (C > 0) {
        x++;
    }

    if (D > 0) {
        x++;
    }

    if (A % 2 == 0) {
        x++;
    }

    if (x == 6) {
        cout << "Valores aceitos" << "\n";
    } else {
        cout << "Valores nao aceitos" << "\n";
    }

    return 0;
}