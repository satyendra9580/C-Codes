#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,w;
    long long total;
    cin>>n>>k>>w;
    total=k*(w*(w+1))/2;
    if(total>n){
        cout<<total-n<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}