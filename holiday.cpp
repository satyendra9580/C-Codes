#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vin(n);
    int result=0;
    for(int i=0;i<n;i++) cin>>vin[i];

    int maxi=*max_element(vin.begin(),vin.end());
    for(int i=0;i<n;i++){
        result += maxi-vin[i];
    }
    cout<<result<<endl;
    return 0;
}