#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=1;i<n;i++){
        cin>>v[i];
    }
    int j=1;
    while(j<t){
        j+=v[j];
    }
    if(j==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}