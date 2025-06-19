#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
    cin>>a>>b>>c;

    int maxProduct=0;
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5-i;j++){
            int k=5-i-j;

            int A=a+i;
            int B=b+j;
            int C=c+k;

            maxProduct=max(maxProduct,A*B*C);
        }
    }
    cout<<maxProduct<<endl;
    }
    return 0;
}