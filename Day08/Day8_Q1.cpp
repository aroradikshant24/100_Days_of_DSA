// Problem: Given integers a and b, compute a^b using recursion without using pow() function.

// Input:
// - Two space-separated integers a and b
// Output:
// - Print a raised to power b
#include <iostream>
using namespace std;

long long power(int a, int b) {
    if (b == 0)
        return 1;             
    return a * power(a, b - 1); 
}
int main() {
    int a, b;
    cin >> a >> b;

    cout << power(a, b);
    return 0;
}
