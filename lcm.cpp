#include <bits/stdc++.h>
using namespace std;
int help(long l, long r){
    for(long long i=l;i<=r;i++){
        for(long long j=i+1;j<=r;j++){
            long long lc=lcm(i,j);
            if(lc>=l && lc<=r){
                cout<<i<<" "<<j<<endl;
                return 0;
            } 
        }  
    }
    cout<<"-1 -1"<<endl;
    return 0;  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        help(l,r);
    }
    return 0;
}