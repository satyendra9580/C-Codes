#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++) cin>>p[i];
        int l, r; 
        cin>>l>>r;
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}
