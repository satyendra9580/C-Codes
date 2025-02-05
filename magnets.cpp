#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==v[i+1]) continue;
        else count++;
    }
    cout<<count<<endl;
    return 0;
}