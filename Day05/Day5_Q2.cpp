// // You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
//  representing the number of elements in nums1 and nums2 respectively.
// // Merge nums1 and nums2 into a single array sorted in non-decreasing order. The final sorted array should not be returned by the function, 
// but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, 
// where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m;

    int nums1[100];
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cin >> n;
    int nums2[100];
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    int i = 0, j = 0, k = 0;
    int result[200];

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            result[k++] = nums1[i++];
        } else {
            result[k++] = nums2[j++];
        }
    }


    while (i < m) result[k++] = nums1[i++];
    while (j < n) result[k++] = nums2[j++];

    for (int x = 0; x < k; x++) {
        cout << result[x] << " ";
    }

    return 0;
}

 