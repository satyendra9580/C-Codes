#include<bits/stdc++.h>
using namespace std;
int wrongsubtraction(int n, int k){
    
    for(int i=0; i<k; i++){

       if(n%10 ==0){
        n =n/10;
       }
       else{
        n=n-1;
       }
    }
    return n;
    
}
int main(){
    int n, k;
    cin>>n>>k;
    int result=wrongsubtraction(n,k);
    cout<<result<<endl;
    return 0;
}