#include <iostream>
using namespace std;

int step(int current, int value) {
    cout << current / value << " nota(s) de R$ " << value << ",00" << "\n";
    return current - ((current / value) * value);
}

int main() {
    int amount;

    cin >> amount;

    cout << amount << "\n";

    amount = step(amount, 100);
    amount = step(amount, 50);
    amount = step(amount, 20);
    amount = step(amount, 10);
    amount = step(amount, 5);
    amount = step(amount, 2);
    amount = step(amount, 1);

    return 0;
}