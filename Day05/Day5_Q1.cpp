// // Problem: A system receives two separate logs of user arrival times from two different servers. 
// Each log is already sorted in ascending order. 
// Your task is to create a single chronological log that preserves the correct order of arrivals.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int p, q;
    cin >> p;

    vector<int> a(p);
    for (int i = 0; i < p; i++) {
        cin >> a[i];
    }

    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0;


    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            cout << a[i++] << " ";
        } else {
            cout << b[j++] << " ";
        }
    }


    while (i < p) {
        cout << a[i++] << " ";
    }

    while (j < q) {
        cout << b[j++] << " ";
    }

    return 0;
}
