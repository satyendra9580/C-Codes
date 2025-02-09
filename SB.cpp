#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;

        if (s.size() == 1) {
            cout << 1 << endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == s[i + 1]) {
                flag = true;
                break;
            }
        }
        cout << (flag ? 1 : (int)s.size()) << "\n";
    }
    
    return 0;
}
