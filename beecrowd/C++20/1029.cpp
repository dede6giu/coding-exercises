#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int> fib(int amount, int calls = 0) {
    if (amount == 0) {
        return make_tuple(0, 1);
    } else if (amount == 1) {
        return make_tuple(1, 1);
    }
    
    tuple<int, int> aux1 = fib(amount - 1);
    tuple<int, int> aux2 = fib(amount - 2);

    return make_tuple(get<0>(aux1) + get<0>(aux2), get<1>(aux1) + get<1>(aux2) + 1);
}

int main() {
    int n, x = 0;
    tuple<int, int> result;

    cin >> n;
    
    while (n != 0) {
        cin >> x;

        result = fib(x);

        cout << "fib(" << x << ") = " << get<1>(result) - 1 << " calls = " << get<0>(result) << "\n";

        n--;
    }

    return 0;
}