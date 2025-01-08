#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(v[i]%2 != i%2){
                if(i%2==0) a++;
                else b++;
            }
        }
        if(a!=b) cout<<-1<<endl;
        else cout<<a<<endl;
    }
    return 0;
}