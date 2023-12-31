#include<bits/stdc++.h>
using namespace std;
void Selection_sort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<=n-2; i++){
        int min=i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    Selection_sort(arr);
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
     return 0;
}