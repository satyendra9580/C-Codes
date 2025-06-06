#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;

    int maxi1=max(s1,s2);
    int maxi2=max(s3,s4);

    vector<int>v={s1,s2,s3,s4};
    sort(v.begin(),v.end());

    int largest=v[3];
    int secondLargest=v[2];

    if((largest==maxi1 || largest==maxi2) && (secondLargest==maxi1 || secondLargest==maxi2)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
    return 0;
}