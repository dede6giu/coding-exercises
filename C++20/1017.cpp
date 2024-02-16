#include <iostream>
using namespace std;
 
int main() {
    int time, avrV;

    cin >> time;
    cin >> avrV;

    cout.precision(3);
    cout << fixed << (time * avrV) / 12.0 << "\n";
    
    return 0;
}