#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int res=INT_MIN;
    for(int i=1;i<x;i++){
        int gcd_value = __gcd(x, i);
        int current = gcd_value + i;
        if (current > res) {
            res = current;
        }
    }
    cout<<res<<endl;
    return 0;
}