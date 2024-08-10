#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    int total_days=0;
    vector<int>selected;
    for(int i=0;i<n;i++){
        if(total_days+v[i].first<=k){
            total_days+=v[i].first;
            selected.push_back(v[i].second);
        }
        else break;
    }
    cout<<selected.size()<<endl;
    for(int i=0;i<selected.size();i++){
        cout<<selected[i]<<" ";
    }
    cout<<endl;
    return 0;
}