// Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain
// only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky
// number. He wonders whether number n is a nearly lucky number.

#include <iostream>
#include <string>

using namespace std;

bool is_nearly_lucky(long long n) {
    string num_str = to_string(n);
    int count_lucky_digits = 0;
    
    for (char c : num_str) {
        if (c == '4' || c == '7') {
            count_lucky_digits++;
        }
    }
    
    string count_str = to_string(count_lucky_digits);
    
    for (char c : count_str) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    
    return true;
}

int main() {
    long long n;
    cin >> n;
    
    if (is_nearly_lucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
