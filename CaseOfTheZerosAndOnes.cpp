#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count0=0,count1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') count0++;
        else count1++;
    }
    int mini=abs(count0-count1);
    cout << mini << endl;
    return 0;
}



