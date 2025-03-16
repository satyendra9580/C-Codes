#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
    cin>>n>>k;

    vector<ll>vin(n);
    for(int i=0;i<n;i++) cin>>vin[i];
    sort(vin.begin(),vin.end());
    ll cnt=1;
    ll ans=1;
    for(int i=1;i<n;i++){
        if((vin[i]-vin[i-1])<=k) cnt++;
        else cnt=1;

        ans=max(ans,cnt);
    }
    cout<<(n-ans)<<endl;
    }
    return 0;
}