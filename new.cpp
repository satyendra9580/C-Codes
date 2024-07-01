#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int a=1;a<n;a++){
        for(int b=1;b<n;b++){
            if(a>b){
                if((a+b)==n){
                    count++;
                }
                break;
            }
        }
    }
    count<<count;
    return 0;
}