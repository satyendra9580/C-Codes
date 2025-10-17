#include <bits/stdc++.h>
using namespace std;

int helper(long long x){
    if(x==0) return -1;
    return 63-__builtin_clzll(x);
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<"\n\n";
            continue;
        }
        if(helper(b)>helper(a)){
            cout<<-1<<endl;
            continue;
        }
        long long XOR = a^b;
        if(XOR<=a){
            cout<<1<<endl<<XOR<<endl;
        } else {
            long long x1 = b & (~a);
            long long x2 = a & (~b);
            cout<<2<<endl<<x1<<" "<<x2<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}
