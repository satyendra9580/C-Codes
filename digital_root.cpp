#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n--){
        long long k;
        int x;
        cin>>k>>x;
        cout << 9 * (k - 1) + x << '\n';
    }
    return 0;
}