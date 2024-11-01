#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        bool odd=false, even=false;
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            sum += c;
            if(c%2!=0) odd=true;
            else even=true;
        }
        if(sum%2!=0 || (even && odd)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}