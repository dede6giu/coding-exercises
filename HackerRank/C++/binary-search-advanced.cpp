#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n, key, aux;
    vector<int> numberList;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        numberList.push_back(aux);
    }

    cin >> key;
    int mid = n / 2;
    int maxIndex = -1;
    int minIndex = -1;
    int keyCount = 0;
    bool indexFound = false;
    bool keyFound = true;

    // loop for minIndex
    int lowaux = 0;
    int highaux = n;
    if (numberList[mid] == key) {
        minIndex = mid;
    }
    while (!indexFound && keyFound) {
        if (numberList[mid] >= key) {
            highaux = mid;
            mid = (lowaux + mid) / 2;
        } else {
            lowaux = mid;
            mid = (highaux + mid) / 2;
        }

        if (numberList[mid] == key) {
            minIndex = mid;
        }

        if (highaux - lowaux <= 1) {
            if (minIndex == -1) {
                keyFound = false;
            }
            indexFound = true;
        }
    }

    // loop for maxIndex
    lowaux = 0;
    highaux = n;
    indexFound = false;
    mid = n / 2;
    if (numberList[mid] == key) {
        maxIndex = mid;
    }
    while (!indexFound && keyFound) {
        if (numberList[mid] <= key) {
            lowaux = mid;
            mid = (highaux + mid) / 2;
        } else {
            highaux = mid;
            mid = (lowaux + mid) / 2;
        }

        if (numberList[mid] == key) {
            maxIndex = mid;
        }

        if (highaux - lowaux <= 1) {
            if (maxIndex == -1) {
                keyFound = false;
            }
            indexFound = true;
        }
    }

    if (keyFound) {
        cout << minIndex << " " << maxIndex << " " << maxIndex - minIndex + 1 << "\n";
    } else {
        cout << "-1 -1 0" << "\n";
    }

    return 0;
}