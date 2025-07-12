#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]!='y' && s[0]!='Y') cout<<"NO"<<endl;
        else if(s[1]!='e' && s[1]!='E') cout<<"NO"<<endl;
        else if(s[2]!='s' && s[2]!='S') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}