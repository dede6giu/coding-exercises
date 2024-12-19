#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    vector<char> arr;

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == '+') continue;
        arr.push_back(s[i]);
    }
    sort(arr.begin(), arr.end());

    for (ll i = 0; i < arr.size() - 1; i++) {
        cout << arr[i] << "+";
    }
    cout << arr[arr.size()-1] << "\n";

    return 0;
}