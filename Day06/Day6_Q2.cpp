// // Given an integer array nums, move all 0's to the end of it while maintaining 
// the relative order of the non-zero elements.
// // Note that you must do this in-place without making a copy of the array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[1000];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int j = 0; 


    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }


    while (j < n) {
        nums[j] = 0;
        j++;
    }


    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
