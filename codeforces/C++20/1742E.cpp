#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<long long int> & v, long long int obj) {
    long long int l = 0;
    long long int r = v.size() - 1;

    while (r > l+1) {
        long long int mid = (l + r) / 2;
        if (v[mid] <= obj) {
            l = mid;
        } else {
            r = mid;
        }
    }

    r = v.size();

    while (l+1 < r and v[l+1] <= obj) {
        l++;
    }

    return l;
}


int main() {
    long long int t, n, q;
    long long int aux, next, h;
    vector<long long int> steps, height;
    queue<long long int> questions;

    cin >> t;

    while (t > 0) {
        aux = 0;
        next = 0;
        h = 0;
        steps.clear();
        height.clear();

        cin >> n >> q;

        for (int i = 0; i < n; i++) {
            cin >> next;
            h += next;
            height.push_back(h);
            aux = next > aux ? next : aux;
            steps.push_back(aux);
        }

        for (int i = 0; i < q; i++) {
            cin >> next;
            questions.push(next);
        }

        while (!questions.empty()) {
            aux = questions.front();
            questions.pop();
            if (aux < steps[0]) {
                cout << 0 << " ";
            } else {
                aux = bsearch(steps, aux);
                cout << height[aux] << " ";
            }
        }
        cout << "\n";
        t--;
    }

    return 0;
}