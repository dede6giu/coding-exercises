#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool checkHorizontal(int n, int m, vector<vector<char>> matrix, string word) {
    int sizeWord = word.length();
    string revWord = word; reverse(revWord.begin(), revWord.end());
    string checkWord = "";
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - sizeWord + 1; j++) {
            checkWord = "";
            for (int k = 0; k < sizeWord; k++) {
                checkWord += matrix[i][j+k];
            }
            if (checkWord == word || checkWord == revWord) {
                return true;
            }
        }
    }
    
    return false;
}

bool checkVertical(int n, int m, vector<vector<char>> matrix, string word) {
    int sizeWord = word.length();
    string revWord = word; reverse(revWord.begin(), revWord.end());
    string checkWord = "";
    
    for (int i = 0; i < n - sizeWord + 1; i++) {
        for (int j = 0; j < m; j++) {
            checkWord = "";
            for (int k = 0; k < sizeWord; k++) {
                checkWord += matrix[i+k][j];
            }
            if (checkWord == word || checkWord == revWord) {
                return true;
            }
        }
    }
    
    return false;
}

bool checkDiagonal1(int n, int m, vector<vector<char>> matrix, string word) {
    int sizeWord = word.length();
    string revWord = word; reverse(revWord.begin(), revWord.end());
    string checkWord = "";
    
    for (int i = 0; i < n - sizeWord + 1; i++) {
        for (int j = 0; j <= m - sizeWord; j++) {
            checkWord = "";
            for (int k = 0; k < sizeWord; k++) {
                checkWord += matrix[i+k][j+k];
            }
            if (checkWord == word || checkWord == revWord) {
                return true;
            }
        }
    }
    
    return false;
}

bool checkDiagonal2(int n, int m, vector<vector<char>> matrix, string word) {
    int sizeWord = word.length();
    string revWord = word; reverse(revWord.begin(), revWord.end());
    string checkWord = "";
    
    for (int i = 0; i < n - sizeWord + 1; i++) {
        for (int j = m; j > sizeWord - 1; j--) {
            checkWord = "";
            for (int k = 0; k < sizeWord; k++) {
                checkWord += matrix[i+k][j-k-1];
            }
            if (checkWord == word || checkWord == revWord) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    vector<vector<char>> soupWords;
    int n, m, q;
    vector<char> lineSoup;
    string lineAux;
    vector<string> words;
    vector<bool> foundWords;
    
    
    // input processing
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        lineSoup.clear();
        cin >> lineAux;
        for (int j = 0; j < m; j++) {
            lineSoup.push_back(lineAux[j]);
        }
        soupWords.push_back(lineSoup);
    }
    
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        cin >> lineAux;
        words.push_back(lineAux);
    }
    
    
    // value processing
    for (int i = 0; i < q; i++) {
        if (checkHorizontal(n, m, soupWords, words[i]) || checkVertical(n, m, soupWords, words[i]) || checkDiagonal1(n, m, soupWords, words[i]) || checkDiagonal2(n, m, soupWords, words[i])) {
            foundWords.push_back(true);
        } else {
            foundWords.push_back(false);
        }
    }
    
    
    // printing results
    for (int i = 0; i < foundWords.size(); i++) {
        lineAux = foundWords[i] ? "SIM" : "NAO";
        cout << lineAux << "\n";
    }
    
    return 0;
}