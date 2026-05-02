// Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.

// Input:
// - First line: integer n
// - Second line: n integers

// Output:
// - Print the count of subarrays having sum zero

// Example:
// Input:
// 6
// 1 -1 2 -2 3 -3

// Output:
// 6
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    int prefix_sum = 0, count = 0;
    freq[0] = 1;

    for(int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        if(freq.find(prefix_sum) != freq.end()) {
            count += freq[prefix_sum];
        }

        freq[prefix_sum]++;
    }

    cout << count;
    return 0;
}