

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0;
    int count2=0;
    while(n>0){
        int m=n%10;
        if(m==4) count1++;
        if(m==7) count2++;
        n=n/10;
    }
    if(count1>0 && count2>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}