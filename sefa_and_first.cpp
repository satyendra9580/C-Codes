#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int current=1;
    int finalA=1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            current++;
        }
        else{
            current=1;
        }
        finalA=max(finalA,current);
    }
    cout<<finalA<<endl;
    return 0;
}