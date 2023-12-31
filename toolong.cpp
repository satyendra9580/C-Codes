#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;
    if(s.length()>10){
        cout<<s[0]<<(s.length()-2)<<s[s.length()-1];
    }
    else{
        cout<<s;
    }
    return 0;
}