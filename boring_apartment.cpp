#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string s=to_string(x);
        int len=s.length();
        int dig=(s[0]-'0'-1);
        cout<<dig*10+len*(len+1)/2<<endl;
    }
    return 0;
}