// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int nums[100];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]";
                return 0;
            }
        }
    }

    return 0;
}
