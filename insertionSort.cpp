#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &arr){
    int n=arr.size();
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
              }
    }
}
int main(){
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    insertion_sort(arr);
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}