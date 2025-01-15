#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>res;
    res.push_back(n);
    while(n!=1){
        if(n%2==0){
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
        res.push_back(n);
    }
    for(auto &c: res){
        cout<<c<<" ";
    }
    return 0;
}