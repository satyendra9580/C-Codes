#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int robin_gold=0;
    int gold_given=0;
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            robin_gold+=v[i];
        }
        else if(v[i]==0 && robin_gold>0){
            gold_given++;
            robin_gold--;
        }
    }
    cout<<gold_given<<endl;
    }
    
    return 0;
}