#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A, B, C, D = {};
    int n, aux1, aux2, l = 0;

    cin >> n;

    while (n > 0) {
        cin >> aux1 >> aux2;
        A.push_back(aux1);
        A.push_back(aux2);
        cin >> aux1 >> aux2;
        B.push_back(aux1);
        B.push_back(aux2);
        cin >> aux1 >> aux2;
        C.push_back(aux1);
        C.push_back(aux2);
        cin >> aux1 >> aux2;
        D.push_back(aux1);
        D.push_back(aux2);
        
        if (A[0] == B[0]) {
            l = abs(A[1] - B[1]);
        } else if (A[0] == C[0]) {
            l = abs(A[1] - C[1]);
        } else {
            l = abs(A[1] - D[1]);
        }

        cout << l*l << "\n";

        A.clear();
        B.clear();
        C.clear();
        D.clear();

        n--;
    }

    return 0;
}