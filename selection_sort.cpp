#include<bits/stdc++.h>
using namespace std;
vector<int>selection_sort(vector<int>&nums,int n){
    for(int i=0;i<n-1;i++){
        auto it=min_element(nums.begin()+i,nums.end());
        int mini=distance(nums.begin(),it);
        swap(nums[i],nums[mini]);
    }
    return nums;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int>result=selection_sort(nums,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}