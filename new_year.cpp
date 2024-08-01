#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int minA=min(x1,min(x2,x3));
    int maxA=max(x1,max(x2,x3));

    int mid=(minA+maxA)/2;
    int X1=abs(mid-minA);
    int X2=abs(mid-maxA);

    cout<<(X1+X2)<<endl;

    return 0;
}