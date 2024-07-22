#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<string>res;
    for(int i=0;i<str.size();i+=3){
        string p;
        while(i<str.size() && str.substr(i,3) != "WUB"){
        p+=str[i];
        i++;
    }
    if(p.size()>0){
        res.push_back(p);
    }
    }
    

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}