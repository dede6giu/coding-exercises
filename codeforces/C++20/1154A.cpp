#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long aux;
    vector<long long> nn;
    
    for (int i=0; i<4; i++) {
        cin >> aux;
        nn.push_back(aux);
    }
    sort(nn.begin(), nn.end());

    cout << nn[3] - nn[2] << " "; 
    cout << nn[3] - nn[1] << " "; 
    cout << nn[3] - nn[0] << "\n"; 

    return 0;
}