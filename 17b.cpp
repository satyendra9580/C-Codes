#include <bits/stdc++.h>
using namespace std;
void solve(string s, int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ans.push_back(i+1);
        } 
    } 
    cout<<ans.size()<<endl;
    if(ans.empty()){
        cout<<endl;
    }else{
        for(int i=0;i<ans.size();++i){
            if(i) cout<<" ";
            cout<<ans[i];
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        solve(s,n);
    }
    return 0;
}
