#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int cnt=1;
    int res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else cnt=1;
        res=max(res,cnt);
    }
    cout<<res<<endl;
    return 0;
}