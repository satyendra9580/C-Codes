#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int count = 0;
        for (int a = 1; a <= x; ++a) {
            for (int b = 1; b <= x; ++b) {
                int max_c_sum = x - (a + b);
                if (max_c_sum < 1) continue;
                for (int c = 1; c <= max_c_sum; ++c) {
                    if (a * b + b * c + c * a <= n) {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}