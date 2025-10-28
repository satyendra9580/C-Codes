#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        bool has_even=false, has_odd=false;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]%2==0) has_even=true;
            else has_odd=true;
        }
        if(has_even && has_odd) sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            cout<<nums[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
