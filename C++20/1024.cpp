#include <iostream>
#include <list>
#include <string>
using namespace std;
 
int main() {
    list<char> text;
    string inputT;
    int half, aux, n;

    cin >> n;

    while (n != 0) {
        getline(cin, inputT);
        
        if (inputT == "") {
            continue;
        }

        half = (inputT.length() + 1) / 2;
        aux = 0;

        for (char c : inputT) {
            if (((int)c >= 65 and (int)c <= 90) or ((int)c >= 97 and (int)c <= 122)) {
                (char)c++;
                (char)c++;
                (char)c++;
            }
            if (aux < half) {
                (char)c--;
            }
            text.push_front(c);
            aux++;
        }

        aux = text.size();

        for (int i = 0; i < aux; i++) {
            cout << text.front();
            text.pop_front();
        }
        cout << "\n";
        text.clear();
        n--;
    }

    return 0;
}