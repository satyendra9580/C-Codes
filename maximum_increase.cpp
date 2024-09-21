#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=1;
    int max_count=1;
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1]) count++;
        else max_count=max(max_count,count);count=1;
    }
    max_count=max(max_count,count);
    cout<<max_count<<endl;
    return 0;
}