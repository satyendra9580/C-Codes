#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>vin(4);
    for(int i=0;i<4;i++) cin>>vin[i];
    int first=vin[0];
    int count=0;
    for(int i=1;i<4;i++){
        if(vin[i]>first) count++;
    }
    cout<<count<<endl;
    }
    return 0;
}