#include <bits/stdc++.h>
using namespace std;
int stairs(int n, int m){
    int min_move=(n+1)/2;
    while(min_move%m != 0){
        min_move++;
    }
    if(min_move>n) return -1;
    return min_move;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<stairs(n,m)<<endl;
    return 0;
}