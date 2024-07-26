#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
  

    vector<vector<int>>grid(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
          int block_size=n/k;
          
    vector<vector<int>>reduced(k,vector<int>(k));
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            int value=grid[i*block_size][j*block_size];
            reduced[i][j]=value;
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cout<<reduced[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}