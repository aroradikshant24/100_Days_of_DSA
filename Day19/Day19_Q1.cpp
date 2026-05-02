// Problem: Given an array of integers, find two elements whose sum is closest to zero.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the pair of elements whose sum is closest to zero

// Example:
// Input:
// 5
// 1 60 -10 70 -80

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;
    int minSum = INT_MAX;
    int x = 0, y = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (abs(sum) < abs(minSum)) {
            minSum = sum;
            x = arr[left];
            y = arr[right];
        }

        if (sum < 0) {
            left++;
        } else {
            right--;
        }
    }

    cout << "Pair with sum closest to zero: " << x << " " << y << endl;

    return 0;
}