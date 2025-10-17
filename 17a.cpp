#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long x;
        long long mx = LLONG_MIN;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>mx) mx = x;
        }
        cout<<mx<<endl;
    }
    return 0;
}
