#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=0;
    vector<int>res;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum<=k) res.push_back(i);
        if(sum>k) sum =sum-res[i]; 
    }
    cout<<res.size()<<endl;
    for(int i=1;i<=res.size();i++){
        cout<<res[i-1]<<" ";
    }
    return 0;
}