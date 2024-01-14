#include<bits/stdc++.h>
using namespace std;

int unionoftwoarray(int a[], int b[], int n1, int n2){
    vector<int> Union;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(Union.size()==0 || Union.back() != a[i]){
                Union.push_back(a[i]);
            }
            i++;
        }
        else{
            if(Union.size()==0 || Union.back() != b[j]){
                Union.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(Union.size()==0 || Union.back() != a[i]){
                Union.push_back(a[i]);
            }
            i++;
    }
    while(j<n2){
        if(Union.size()==0 || Union.back() != b[j]){
                Union.push_back(b[j]);
            }
            j++;
    }
    for(int i=0; i<Union.size(); i++){
        cout<<Union[i]<<" ";
    }
    
}
int main(){
    int n1;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    int a[n1];
    for(int i=0; i<n1; i++){
        cin>>a[i];
    }

    int n2;
    cout<<"Enter the size of second array: ";
     cin>>n2;
    int b[n2];
    for(int i=0; i<n2; i++){
        cin>>b[i];
    }
    unionoftwoarray(a,b,n1,n2);
    return 0;
}