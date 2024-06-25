#include <bits/stdc++.h>
using namespace std;

int iq_test(vector<int> & v,int n){
    int even=0, odd=0;
    int even_index=-1;
    int odd_index=-1;
    for(int i=1; i<n; i++){
        if(v[i]%2==0){
            even+=1;
            even_index=i;
        }
        else{
            odd+=1;
            odd_index=i;
        }
        
    }
    if(even==1){
        cout<<even_index<<endl;
    }
    else{
        cout<<odd_index<<endl;
    }
    
}
int main(){
    vector<int>v={2,4,7,8,10};
    int n=v.size();
    int final=iq_test(v,n);
    cout<<"Final answer is: "<<final;

    return 0;
}