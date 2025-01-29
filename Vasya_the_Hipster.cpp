#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int diff=abs(a-b);
    int div=diff/2;
    if(a<b) cout<<a<<" "<<div<<endl;
    else cout<<b<<" "<<div<<endl;
    return 0;
}