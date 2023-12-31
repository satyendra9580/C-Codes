//Better Approch

#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[], int n){
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int slargest=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>slargest && arr[i] != largest){
            slargest=arr[i];
        }
    }
      return slargest; 
}
int main(){
    int n;
     cout<<"Enter the size of an array: ";
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int result=secondlargest(arr,n);
     cout<<"Second largest element is: "<<result;
    return 0;
}

//Optimal Approch

#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[], int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int main(){
    int n;
     cout<<"Enter the size of an array: ";
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int result=secondlargest(arr,n);
     cout<<"Second largest element is: "<<result;
    return 0;
}

