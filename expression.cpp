#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int final=max({a+b+c,a*b*c,a+b*c,a*b+c,a*b*c,(a+b)*c,a*(b+c)});
   cout<<final<<endl;

    return 0;
}