#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long f,s;
        f=-1,s=-1;
        if(a<c) f=1;
        if(b*a>c) s=b;
        cout<<f<<" "<<s<<endl;
    }
    return 0;
}