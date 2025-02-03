#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();

    vector<bool>check(s1.length(),true);
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]) continue;
        else check[i]=false;
    }
    vector<int>zero;
    for(int i=0;i<n;i++){
        if(check[i]==false) zero.push_back(i);
    }
    swap(s1[zero[0]],s1[zero[1]]);
    if(s1==s2) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}