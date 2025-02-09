#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
    cin>>s;
    int n=s.length();

    string str="";
    for(int i=0;i<(n-2);i++){
        str.push_back(s[i]);
    }
    str.push_back('i');
    cout<<str<<endl;
    }
    
    return 0;
}