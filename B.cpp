#include<bits/stdc++.h>
using namespace std;
int move(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum +=a[i];
    }
    if(sum%3==0){
        return 0;
    }
    else{
        int remainder=sum%3;
        if(remainder==1){
            vector<int> one_mod;
            vector<int> two_mod;
            for(int i=0; i<n; i++){
                if(a[i]%3==1){
                    one_mod.push_back(a[i]);
                }
                else if(a[i]%3==2){
                    two_mod.push_back(a[i]);
                }
            }
            sort(one_mod.begin(), one_mod.end());
            sort(two_mod.begin(), two_mod.end());

            
        if (!one_mod.empty()) {
            return 1 + min(sum - two_mod[0], sum - one_mod[0] - one_mod[1]);
        } else {
            return 2 + sum - one_mod[0] - one_mod[1];
        }

        }
        else if(remainder==2){
            vector<int>one_mod;
            vector<int>two_mod;
            for(int i=0; i<n; i++){
                if(a[i]%3==1){
                    one_mod.push_back(a[i]);
                }
                else if(a[i]%3==2){
                    two_mod.push_back(a[i]);
                }
            }
            sort(one_mod.begin(), one_mod.end());
            sort(two_mod.begin(), two_mod.end());

            if (!two_mod.empty()) {
            return 1 + min(sum - two_mod[0], sum - one_mod[0] - one_mod[1]);
        } else {
            return 2 + sum - one_mod[0] - one_mod[1];
        }

        }
    }
   

}
int main(){
   int t;
   cin>>t;
    while(t--){
        move();
    }
    return 0;
}