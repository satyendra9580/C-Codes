#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    string target="hello";
    int length=target.length();
    int j=0;
    for(char ch:s){
        if(ch==target[j]){
            j++;
        }
    }
    if(j==length) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
int main(){
    string s;
    cin>>s;
    check(s);
    return 0;
}