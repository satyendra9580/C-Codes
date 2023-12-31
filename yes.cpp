#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    for(int i=0; i<=s.length(); i++){
        if((s[i]=='Y' ||s[i]=='y') && (s[i+1]=='E' || s[i+1]=='e') && (s[i+2]=='S' || s[i+2]=='s')){
            cout<<"YES";
            break;
        }
        else{
            cout<<"NO";
            break;
        }
        
    }
    }
    return 0;
}