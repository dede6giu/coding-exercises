#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n, bigg = 0, aux, cnt = 0;
    cin >> n;
    
    for (long long int i = 0; i < n; i++) {
        cin >> aux;
        if (aux >= bigg) {
            bigg = aux;
            continue;
        }
        cnt += (bigg - aux);
    }
    
    cout << cnt << "\n";
 
    return 0;
