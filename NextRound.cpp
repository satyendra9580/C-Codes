#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m=a[k-1];
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]>=m && a[i]>0){
            count +=1;
        }
    
    }
    
    cout<<count;
    return 0;
}