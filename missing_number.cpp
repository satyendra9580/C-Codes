#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int>vin(n-1);
    for(int i=0;i<n-1;i++){
        cin>>vin[i];
    }
    long long total_sum=(n*(n+1))/2;
    long long curr_sum=0;
    for(int &num:vin){
        curr_sum += num;
    }
    cout<<(total_sum-curr_sum)<<endl;
    return 0;
}