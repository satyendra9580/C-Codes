#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y'){
            str += ".";
            str+=tolower(s[i]);
        }
        if(isupper(s[i])){
           tolower(s[i]);
        }
        else{
            continue;
        }
    }
    cout<<str<<endl;
    return 0;
}