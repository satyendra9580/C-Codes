#include<bits/stdc++.h>
using namespace std;
string k_string(int k,string s){
    int n=s.length();
    if(n%k!=0) return "-1";
    unordered_map<char,int>mp;
    for(char c: s){
        mp[c]++;
    }
    for(auto num: mp){
        if(num.second%k!=0) return "-1";
    }
    string firstPart="";
    for(auto c:mp){
        char str=c.first;
        int freq=c.second/k;
        firstPart += string(freq,str);
    }
    string result="";
    for(int i=0;i<k;i++){
        result += firstPart;
    }
    return result;

}
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    cout<<k_string(k,s)<<endl;
    return 0;
}