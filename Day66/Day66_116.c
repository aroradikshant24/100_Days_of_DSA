//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
//The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. 
//Assume exactly one solution exists and return the indices in any order.
// Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

#include <stdio.h>

#define MAX 1000 
int main() {
    int n, target;
    int nums[MAX];
    int hash[MAX];
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);
    for (i = 0; i < MAX; i++) {
        hash[i] = -1;
    }

    for (i = 0; i < n; i++) {
        int complement = target - nums[i];

        if (complement >= 0 && complement < MAX && hash[complement] != -1) {
            printf("%d %d\n", hash[complement], i);
            return 0;
        }
        hash[nums[i]] = i;
    }
    printf("-1 -1\n");
    return 0;
}