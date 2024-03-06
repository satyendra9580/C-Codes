#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   int count=0;
   while(b>=a){
    a=3*a;
    b=2*b;
    count++;
   }
   cout<<count;
    return 0;
}