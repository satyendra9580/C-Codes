#include<bits/stdc++.h>
using namespace std;

int partion(vector<int>&nums,int low,int high){
    int i=low;
    int j=high;
    int pivot=nums[low];
    while(i<j){
        while(nums[i]<=pivot && i<=high) i++;
        while(nums[j]>pivot && j>=low) j--;

        if(i<j) swap(nums[i],nums[j]);
    }
    swap(nums[low],nums[j]);
    return j;
}

void quickSort(vector<int>&nums,int low,int high){
   if(low<high){
    int pIndex=partion(nums,low,high);
    quickSort(nums,low,pIndex-1);
    quickSort(nums,pIndex+1,high);
   }
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    quickSort(nums,0,n-1);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}