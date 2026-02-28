// // Problem: A secret system stores code names in forward order. To display them in mirror format, 
// you must transform the given code name so that its characters appear in the opposite order.

// // Input:
// // - Single line: a lowercase string containing only alphabetic characters (no spaces)
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}
