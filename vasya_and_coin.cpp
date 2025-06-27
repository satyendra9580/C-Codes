#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
    cin>>a>>b;
    if(a==0) cout<<1<<endl;
    else{
        int res=(a*1+b*2);
        cout<<res+1<<endl;
    }
    }
    return 0;
}