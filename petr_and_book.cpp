#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    int sum=0;
    while(true){
        for(int i=0;i<7;i++){
        sum += v[i];
        if(sum>=n){
            cout<<i+1<<endl;
            return 0;
        }
    }
    }
    return 0;
}