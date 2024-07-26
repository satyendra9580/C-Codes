#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int animal1=n/2;
    int animal2;
    if(n%4==0){
            animal2=n/4;
    }
    else{
        animal2=(n/4)+1;
    }
    int result=min(animal1,animal2);
    cout<<result<<endl;
    }
    return 0;
}