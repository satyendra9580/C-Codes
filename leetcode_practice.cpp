#include<bits/stdc++.h>
using namespace std;
string invert(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]='1';
            }
            else if(s[i]=='1'){
                s[i]='0';
            }
        }
        return s;
    }
string reverse(string s){
    string str="";
    for(int i=s.length();i>=0;i--){
           str.push_back(s[i]);
    }
    return str;
}
string helper(){
        string s1="0";
        string str=invert(s1);
        string reversed=reverse(str);
        return s1+"1"+reversed;
    }
int main(){
    string s;
    cin>>s;
    cout<<helper()<<endl;
    return 0;
}