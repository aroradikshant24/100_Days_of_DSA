// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers 

#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }


    for (auto it : freq) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}