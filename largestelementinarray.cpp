#include<bits/stdc++.h>
using namespace std;
int largestelement(int arr[], int n){
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
     int n;
     cout<<"Enter the size of an array: ";
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int result=largestelement(arr,n);
     cout<<"Largest element is: "<<result;
    return 0;
}