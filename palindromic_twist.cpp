#include<bits/stdc++.h>
using namespace std;
bool canPalindromic(string s, int n){
    for(int i=0;i<n/2;i++){
        char left=s[0];
        char right=s[n-i-1];
        if(abs(left-right)!=0 && abs(left-right)!=2){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>s>>n;
        if(canPalindromic(s,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

