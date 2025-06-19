#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    int even=0,odd=0;

    for(int i=0;i<n;i++){
        if(nums[i]%2==0) even+=nums[i];
        else odd += nums[i];
    }
    if(even>odd) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    return 0;
}