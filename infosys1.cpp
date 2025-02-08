#include <bits/stdc++.h>
using namespace std;
int main(){
    int e,n;
    cin>>e>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>e) continue;
        int flag=2;
        while(flag != 0){
            if(sum<e){
                sum += v[i];
                count++;
                flag--;
            }
        }
        if(sum==e) break;
    }
    if(sum<e) cout<<-1<<endl;
    else cout<<count<<endl;
    return 0;
}