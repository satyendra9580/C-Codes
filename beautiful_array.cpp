#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
    
        sort(nums.begin(),nums.end());
    
        int sum=0;
        for(int i=1;i<n;i++){
            sum += (nums[i]-nums[i-1]);
        }
        cout<<sum<<endl;
    }
    
    return 0;
}