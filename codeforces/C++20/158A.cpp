#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, kth, i = 0;
    string scoresSTR, auxSTR = "";
    vector<int> scores = {};

    cin >> n >> k;
    cin.ignore();
    getline(cin, scoresSTR);

    for (int c = 0; c < scoresSTR.length(); c++) {
        if (scoresSTR[c] == ' ') {
            scores.push_back(stoi(auxSTR));
            auxSTR = "";
        } else {
            auxSTR += scoresSTR[c];
        }
    }
    scores.push_back(stoi(auxSTR));
    auxSTR = "";

    kth = scores[k - 1];

    while (i < scores.size()) {
        if (scores[i] >= kth and scores[i] > 0) {
            i++;
        } else {
            scores.erase(scores.begin()+i);
        }
    }

    cout << scores.size() << "\n";

    return 0;
}