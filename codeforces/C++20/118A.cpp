#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    string in, out = "";
    cin >> in;
    
    for (int i = 0; i < in.size(); i++) {
        out += tolower(in[i]);
    }
    in = out;
    out = "";

    for (int i = 0; i < in.size(); i++) {
        char aux = in[i];
        if (aux == 'a' or aux == 'e' or aux == 'i' or aux == 'o' or aux == 'u' or aux == 'y') {
            continue;
        }
        out += ".";
        out += in[i];
    }

    cout << out << "\n";

    return 0;
}
