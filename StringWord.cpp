#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lcount=0;
    int ucount=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==tolower(s[i])){
            lcount++;
        }
        else if(s[i]==toupper(s[i])){
            ucount++;
        }
    }
    if(lcount>=ucount){
    for(int i=0; i<s.length();i++){
        cout<<(char)tolower(s[i]);
    }
    }
     else{
        for(int i=0; i<s.length(); i++){
        cout<<(char)toupper(s[i]);
        }
    }
      cout<<endl;
    return 0;
}