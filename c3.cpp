#include <bits/stdc++.h>
using namespace std;

int countOccurrences(string &str, int x) {
    if (x < 1 || x + 3 > str.size()) 
        return 0;

    string btr = "1100";
    for (int y = 0; y <= 3; ++y) {
        if (str[x + y] != btr[y]) 
            return 0;
    }
    return 1;
}

void solve() {
    string str;
    cin >> str;
    int n = str.length();
    str = "." + str;
    int cnt = 0;

    for (int i = 1; i <= n; ++i) 
        cnt += countOccurrences(str, i);

    int q;
    cin >> q;

    while (q-- > 0) {
        int i;
        char ch;
        cin >> i >> ch;
        
        for (int j = i - 4; j <= i; ++j) 
            cnt -= countOccurrences(str, j);
        
        str[i] = ch;
        
        for (int j = i - 4; j <= i; ++j) 
            cnt += countOccurrences(str, j);

        cout << (cnt > 0 ? "YES" : "NO") << endl;
    }
}

int main() {
    int tests;
    cin >> tests;

    while (tests-- > 0) 
        solve();

    return 0;
}