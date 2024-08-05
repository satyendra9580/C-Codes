#include <bits/stdc++.h>
using namespace std;
void Map(vector<string>&v){
    unordered_map<string,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    int count=0;
    for(auto &cal:mp){
            if(cal.second==1) count++;
        }
        cout<<count;
    // for(const auto &pr:v){
    //     if(mp[pr]==1){
    //         //cout<<pr<<endl;
    //     }
    // }
    // cout<<"";
}
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    Map(v);
    return 0;
}