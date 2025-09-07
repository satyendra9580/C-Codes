#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        string a, b, c;

        cin >> n;      
        cin >> a;
        cin >> m;      
        cin >> b;
        cin >> c;
        
        string vlad="",dima="";
        for(int i=0;i<m;i++){
            if(c[i]=='D'){
                dima.push_back(b[i]);
            }else{
                vlad.push_back(b[i]);
            }
        }
        reverse(vlad.begin(),vlad.end());
        cout<<vlad+a+dima<<endl;
    }
    return 0;
}