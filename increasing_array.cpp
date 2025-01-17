#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>vin(n);
    for(int i=0;i<n;i++){
        cin>>vin[i];
    }
    long long moves=0;
    for(int i=1;i<n;i++){
        if(vin[i]<vin[i-1]){
            long long diff=vin[i-1]-vin[i];
            vin[i] += diff;
            moves+= diff;
        }
    }
    cout<<moves<<endl;
    return 0;
}