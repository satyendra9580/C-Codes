#include<bits/stdc++.h>
using namespace std;
vector<int>bubble_sort(vector<int>&nums,int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    return nums;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int>result=bubble_sort(nums,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}