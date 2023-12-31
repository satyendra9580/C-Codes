#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
            right++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}
void MS(vector<int> &arr, int low, int high){
    int mid=(low+high)/2;
    if(low==high){
        return;
    }
    MS(arr, low,mid);
    MS(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge_sort(vector<int> &arr, int n){
    //n=arr.size();
     MS(arr, 0, n-1);
}

int main(){
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    merge_sort(arr,n);
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}