#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        if(mp1==mp2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}