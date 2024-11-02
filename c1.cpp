#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    bool isPerfect=true;
    for(int i=1;i<n;i++){
        int interval=abs(v[i]-v[i-1]);
        if(interval != 5 && interval != 7){
            isPerfect=false;
            break;
        }
    }
    if(isPerfect) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}