#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
    cin>>n>>m>>l>>r;
    int l_=0,r_=0;
    while(m>0){
        if(r_ < r && m > 0){
            r_++;
            m--;
        }
        if(l_ > l && m > 0){
            l_--;
            m--;
        }
    }
    cout<<l_<<" "<<r_<<endl;
    }
    return 0;
}