#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int f=-1, l=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(f==-1) f=i;
                l=i;
            }
        }
        if(f==-1){
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        for(int i=f;i<=l;i++) {
            if(s[i]=='0'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}