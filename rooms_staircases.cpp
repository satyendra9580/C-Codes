#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
    cin>>n;
    string s;
    cin>>s;
    int l=-1, r=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1') l=i+1;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1') r=i+1;
    }
    if(l!=-1){
        int ans=n;
        int k=2*(l-r+1);
        k+=max(l-1,n-r);
        cout<<ans<<endl;
    }
    }
   
    return 0;
}