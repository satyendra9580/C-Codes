#include<bits/stdc++.h>
using namespace std;
int minOperation(int n,vector<int>&a){
    bool allEqual=true;
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            allEqual=false;
            break;
        }
    }
    if(allEqual) return 0;

    bool non_increasing=true;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            non_increasing=false;
            break;
        }
    }
    if(non_increasing) return 1;

    return 2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<minOperation(n,v)<<endl;
    }
    return 0;
}