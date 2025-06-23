#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;

        for (int d = 1; d <= 9; ++d) {
            long long num = d;
            while (num <= n) {
                count++;
                num *= 10;
            }
        }

        cout << count << endl;
    }
    return 0;
}
