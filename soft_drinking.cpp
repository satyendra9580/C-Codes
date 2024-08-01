#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int A=(k*l)/nl;
    int B=(c*d)/1;
    int C=p/np;

    int res = min(A, min(B, C)); 
    cout<<res/n<<endl;
    return 0;
}