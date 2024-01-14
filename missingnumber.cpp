#include<bits/stdc++.h>
using namespace std;
void missing(vector<int> nums){
    int n=nums.size();
    for(int i=1; i<n; i++){
        int flag=0;
        for(int j=0; j<n-1; j++){
            if(nums[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            
            cout<<"Missing number is: "<<i;
        }
    }
}
int main(){
     vector<int> arr={1,2,3,5,6};
     missing(arr);
    return 0;
}