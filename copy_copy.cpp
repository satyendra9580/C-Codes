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
        unordered_set<int>st(nums.begin(),nums.end());
        cout<<st.size()<<endl;
    }
    return 0;
}