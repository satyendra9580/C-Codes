#include <iostream>
#include <vector>

using namespace std;

bool canSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 10) {
            int num = a[i];
            int prevDigit = -1;
            while (num > 0) {
                int digit = num % 10;
                if (prevDigit != -1 && digit > prevDigit) {
                    return false;
                }
                prevDigit = digit;
                num /= 10;
            }
        }
    }
    return true;
}

int main() {
    int t;
    // cin >> t;

    // while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canSort(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    

    return 0;
}
