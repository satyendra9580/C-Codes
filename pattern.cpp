#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        for(int j=0; j<(2*i+1); j++){
            cout<< "*";
        }
        for(int j=0; j<i; j++){
            cout<< " ";
        }
    }
    return 0;
}