//Q117: Write a program to take two sorted arrays of size m and n as input.
// Merge both the arrays such that the merged array is also sorted. 
//Print the merged array.

#include <stdio.h>

#define MAX 1000

int main() {
    int nums1[MAX], nums2[MAX], merged[MAX];
    int m, n, i = 0, j = 0, k = 0;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter elements of first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    printf("Enter elements of second sorted array: ");
    for (j = 0; j < n; j++) {
        scanf("%d", &nums2[j]);
    }
    i = 0; j = 0; k = 0;
    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }
    while (i < m)
        merged[k++] = nums1[i++];

    while (j < n)
        merged[k++] = nums2[j++];

    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}