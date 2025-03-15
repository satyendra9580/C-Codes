#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    string res;
    unordered_map<string,int>mp;
    
    for(int i=0;i<n-1;i++){
        string str=s.substr(i,2);
        mp[str]++;
    }
    string ans;
    int maxi=0;
    for(auto &it:mp){
        if(it.second>maxi){
            maxi=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}