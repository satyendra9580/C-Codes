#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=-1;
    for(int i=1;i<n;i++){
        int sumL = accumulate(v.begin(), v.begin() + i, 0); 
        int sumR = accumulate(v.begin() + i + 1, v.end(), 0);
        if(sumR==sumL){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}