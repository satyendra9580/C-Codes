#include<bits/stdc++.h>
using namespace std;
int rotation(int arr[], int n, int k){
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i]=arr[i];
    }
    for(int i=k; i<n; i++){
        arr[i-k]=arr[i];
    }
    int j=0;
    for(int i=n-k; i<n; i++){
        arr[i]=temp[j];
        j++;
    }
}
int main(){
    int arr[]={5,4,7,9,6,1,3};
    rotation(arr,7,3);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}


