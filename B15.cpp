#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string a;
       cin>>a;
       int n=a.length();
       string str="";
       for(char &ch: a){
        if(ch=='p'){
            str.push_back('q');
        }
        else if(ch=='q'){
            str.push_back('p');
        }
        else str.push_back(ch);
       }
       reverse(str.begin(),str.end());
       cout<<str<<endl;
    }
    return 0;
}