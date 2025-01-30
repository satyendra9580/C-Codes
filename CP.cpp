#include<bits/stdc++.h>
using namespace std;

bool isDivisibleBy60(const string& num) {
    int sum = 0;
    int count_zero = 0;
    int count_even = 0;

    for (char ch : num) {
        int digit = ch - '0';
        sum += digit;
        if (digit == 0) count_zero++;
        if (digit % 2 == 0) count_even++;
    }

    // Check for divisibility by 60:
    // 1. Sum of digits must be divisible by 3.
    // 2. There must be at least two zeros (to ensure divisibility by 100, which is stronger than 60).
    // OR
    // 1. Sum of digits must be divisible by 3.
    // 2. There must be at least one zero and another even digit (to ensure divisibility by 20, which is sufficient for 60).

    if (sum % 3 != 0) return false; // Not divisible by 3.

    if (count_zero >= 2) return true; // Divisible by 100 (stronger than 60).

    if (count_zero >= 1 && count_even >= 2) return true; // Divisible by 20 (sufficient for 60).

    return false;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string y;
        cin >> y;
        if (isDivisibleBy60(y)) {
            cout << "red" << endl;
        } else {
            cout << "cyan" << endl;
        }
    }
    return 0;
}