#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);

        istringstream iss(s);
        string word;
        string result="";
        while(iss>>word){
            result.push_back(word[0]);
        }
        cout<<result<<endl;
    }
    return 0;
}