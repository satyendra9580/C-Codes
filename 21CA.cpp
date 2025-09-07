#include <bits/stdc++.h>
using namespace std;

long long costFunc(long long n){
    long long cost = 0;
    long long powerOF3 = 1; 
    int k = 0;
    long long temp = n;

    while (temp > 0) {
        int achar = temp % 3; 
        if (achar) {
            if (k == 0) {
                cost += (long long)achar * 3LL;
            } else {
                long long pow3k = powerOF3;
                long long pow3_pahle = pow3k / 3LL;
                long long cost_k = 3LL * pow3k + (long long)k * pow3_pahle;
                cost += (long long)achar * cost_k;
            }
        }
        temp /= 3;
        k++;
        powerOF3 *= 3LL; 
    }
    return cost;
}
int main() {

    int t;
    cin>>t;

    while (t--) {
        long long n;
        cin >> n;

        long long cost=costFunc(n);
        cout << cost << endl;
    }
    return 0;
}
