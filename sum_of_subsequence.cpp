#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>nums(7);
        for(int i=0;i<7;i++) cin>>nums[i];
        sort(nums.begin(),nums.end());
        int a1=nums[0];
        int a2=nums[1];
        int a3=nums[6]-a1-a2;

        cout<<a1<<" "<<a2<<" "<<a3<<" "<<endl;
    }
    return 0;
}