#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int val = stoi(s);       
        int root = sqrt(val);

        if (root * root == val) {
            cout << 0 << " " << root << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
