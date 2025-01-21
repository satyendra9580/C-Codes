#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long a,b;
    cin>>a>>b;
    long long diff=abs(a-b);
    long long move=diff/10;
    if(diff % 10 != 0) {
             move++;
         }
    cout<<move<<endl;
    }
    return 0;
}