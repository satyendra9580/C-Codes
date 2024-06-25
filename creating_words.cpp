#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char firstA=a[0];
        char firstB=b[0];
        a[0]=firstB;
        b[0]=firstA;
        cout<<a<<" "<<b<<endl;
    }
    
   
return 0;
}