#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int j=0;
        for(int i=0;i<a.size();i++){
            if(j>=b.size()) break;
            if(a[i]==b[j]){j++;continue;}
            if(a[i]=='?'){
                a[i]=b[j];
                j++;
                continue;
            }

        }
        for(int i=0;i<a.size();i++){
            if(a[i]=='?'){a[i]=='a';}
        }
        if(j>=b.size()){cout<<"YES"<<endl;cout<<a<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0;
}