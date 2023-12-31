#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr){
    int n=arr.size();
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
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
    bubble_sort(arr);
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}