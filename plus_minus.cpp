#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c==(a+b)) cout<<'+'<<endl;
        else cout<<'-'<<endl;
    }
    return 0;
}