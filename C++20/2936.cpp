#include <iostream>
using namespace std;

int portion(int q) {
    int a;

    cin >> a;

    return q*a;
}

int main() {
    int g = 225;
    int a = 0;

    g += portion(300);
    g += portion(1500);
    g += portion(600);
    g += portion(1000);
    g += portion(150);
    
    cout << g << "\n";
    
    return 0;
}