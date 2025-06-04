#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
    cin>>s;

    int count0=0,count1=0;
    int mini;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') count0++;
        else count1++;

        mini=min(count0,count1);
    }
    if(mini%2==1) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
    }
    return 0;
}