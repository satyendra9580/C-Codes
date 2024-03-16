#include<bits/stdc++.h>
using namespace std;
int main(){
    int x[3];
    int y[3];
    int z[3];
    for(int i=0; i<3; i++){
        cin>>x[i];
    }
    for(int i=0; i<3; i++){
        cin>>y[i];
    }
    for(int i=0; i<3; i++){
        cin>>z[i];
    }
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i=0; i<3; i++){
        sum1 += x[i];
    }
    for(int i=0; i<3; i++){
        sum2 += y[i];
    }
    for(int i=0; i<3; i++){
        sum3 += z[i];
    }
    
    if((sum1+sum2+sum3)==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}