#include <bits/stdc++.h>
using namespace std;

string decrypt(const string& t) {
    string s;
    int n = t.length();
    int i = 0;
    int count = 1;

    while (i < n) {
        s += t[i];
        i += count;
        count++;
    }

    return s;
}

int main() {
    int n;
    string t;

    cin >> n;
    cin >> t;

    string s = decrypt(t);
    cout << s << endl;

    return 0;
}

// Let's break down the logic of the decryption process:

// The Encryption Process (for reference):

// The first letter is written 1 time
// The second letter is written 2 times
// The third letter is written 3 times
// And so on...


// The Decryption Process (our goal):

// We need to reverse this process
// We take the first letter, then skip 1
// We take the next letter, then skip 2
// We take the next letter, then skip 3
// And so on...