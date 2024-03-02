#include <iostream>
using namespace std;
 
int main() {
    double n1, n2, n3, n4, avr;

    cin >> n1 >> n2 >> n3 >> n4;

    avr = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    cout.precision(1);
    cout << fixed << "Media: " << avr << "\n";

    if (avr < 5) {
        cout << "Aluno reprovado." << "\n";
    } else if (avr >= 7) {
        cout << "Aluno aprovado." << "\n";
    } else {
        cout << "Aluno em exame." << "\n";
        
        double extra;

        cin >> extra;
        cout << fixed << "Nota do exame: " << extra << "\n";

        avr = (avr + extra) / 2;

        if (avr >= 5) {
            cout << "Aluno aprovado." << "\n";
            cout << fixed << "Media final: " << avr << "\n";
        } else {
            cout << "Aluno reprovado." << "\n";
            cout << fixed << "Media final: " << avr << "\n";
        }
    }

    return 0;
}