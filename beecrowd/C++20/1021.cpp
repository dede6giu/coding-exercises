#include <iostream>
using namespace std;

int step(int current, double value) {
    if (value < 1.00) {
        cout << fixed << current / (int) (value * 100) << " moeda(s) de R$ " << value << "\n";
        return current - ((current / (int) (value * 100)) * (int) (value * 100));
    } else if (value == 1.00) {
        cout << current / (int) (value * 100) << " moeda(s) de R$ 1.00" << "\n";
        return current - ((current / (int) (value * 100)) * (int) (value * 100));
    } else {
        cout << current / (int) (value * 100) << " nota(s) de R$ " << (int) value << ".00" << "\n";
        return current - ((current / (int) (value * 100)) * (int) (value * 100));
    }
}

int main() {
    double preAmount;
    int amount;

    cin >> preAmount;

    preAmount = preAmount * 100;
    amount = (int) preAmount;

    cout << "NOTAS:" << "\n";
    amount = step(amount, 100.00);
    amount = step(amount, 50.00);
    amount = step(amount, 20.00);
    amount = step(amount, 10.00);
    amount = step(amount, 5.00);
    amount = step(amount, 2.00);
    
    cout << "MOEDAS:" << "\n";
    cout.precision(2);
    amount = step(amount, 1.00);
    amount = step(amount, 0.50);
    amount = step(amount, 0.25);
    amount = step(amount, 0.10);
    amount = step(amount, 0.05);
    amount = step(amount, 0.01);

    return 0;
}