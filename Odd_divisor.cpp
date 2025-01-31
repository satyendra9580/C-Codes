#include <iostream>
using namespace std;

bool hasOddDivisor(long long n) {
    return (n & (n - 1)) != 0; // Checks if n is NOT a power of 2
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (hasOddDivisor(n) ? "YES" : "NO") << endl;
    }
    return 0;
}


// If n is a power of 2 (e.g., 2,4,8,16,...2,4,8,16,...), then all of its divisors are powers of 2, meaning it has no odd divisor greater than 1.

// If n is not a power of 2, then it must have an odd divisor greater than 1.

// A number n is a power of 2 if and only if it has only one set bit in its binary representation.
// This can be checked using bitwise AND:

//     n is a power of 2 if and only if (n&(n−1))==0.