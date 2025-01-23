#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
    cin>>a>>b;
    int count=0;
    if(a%b==0) cout<<0<<endl;
    else{
        int rem=a%b;
        count=b-rem;
        cout<<count<<endl;
    }
    }
    return 0;
}