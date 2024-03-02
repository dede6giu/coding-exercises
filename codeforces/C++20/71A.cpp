#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n = 0;

    cin >> n;

    while (n > 0) {
        string word = "";

        cin >> word;

        if (word.length() > 10) {
            cout << word[0];
            cout << word.length() - 2;
            cout << word[word.length() - 1] << "\n";
        } else {
            cout << word << "\n";
        }

        n--;
    }

    return 0;
}
