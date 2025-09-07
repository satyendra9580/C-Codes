#include<bits/stdc++.h>
using namespace std;
vector<int>insertion_sort(vector<int>&nums,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
    return nums;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int>result=insertion_sort(nums,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}