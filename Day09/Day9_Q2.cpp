// // Write a function that reverses a string.
//  The input string is given as an array of characters s.
// // You must do this by modifying the input array in-place with O(1) extra memory.

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    vector<char> s = {'h','e','l','l','o'};

    reverseString(s);

    for (char c : s)
        cout << c << " ";

    return 0;
}
