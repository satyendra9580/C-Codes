#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v={1};
    for(int i=2;i<1690;i++){
        if(i%2==0 || i%3==0 || i%5==0){
            v.push_back(i);
        }
        if(v.size()==n) break;
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<v[n-1];
    return 0;
}