#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int q,l,r;
        cin>>l>>r;
        int m,n;
        for(int i=0; i<n; i++){
                  cin>>a[i];
        }
        if((l<=m<=r) && (l<=n<=r)){
            cout<<m<<n<<endl;
            
        }

    }
    return 0;

}