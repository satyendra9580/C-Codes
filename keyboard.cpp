#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    string str="qwertyuiopasdfghjkl;zxcvbnm,./";
    int n=s.length();
    string res="";
    for(int i=0;i<n;i++){
        if(ch=='R'){
            for(int j=0;j<str.length();j++){
                if(s[i]==str[j]) res.push_back(str[j-1]);
            }
        }
        else{
            for(int j=0;j<str.length();j++){
                if(s[i]==str[j]) res.push_back(str[j+1]);
            }
        }
    }
    cout<<res<<endl;
    return 0;
}