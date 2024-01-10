#include<bits/stdc++.h>
using namespace std;

void Intersection(int a[], int b[], int n1, int n2){
    vector<int> visited(n2,0);
    vector<int> answer;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(a[i]==b[j] && visited[j]==0){
                answer.push_back(a[i]);
                visited[j]=1;
                break;
            }
            if(b[j]>a[i]){
                break;
            }
        }
    }
    for(int i=0; i<answer.size(); i++){
        cout<<answer[i]<<" ";
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
    Intersection(a,b,n1,n2);
    return 0;
}