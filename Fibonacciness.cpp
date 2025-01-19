#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a4,a5;
    cin>>a1>>a2>>a4>>a5;

    vector<int>res;
    res.push_back(a1+a2);
    res.push_back(a4-a2);
    res.push_back(a5-a4);

    unordered_map<int, int> freq;
    for (int val : res) {
        freq[val]++;
    }

    int maxFibonacciness = 0;
    for (auto& pair : freq) {
        if (pair.second > maxFibonacciness) {
            maxFibonacciness = pair.second;
        }
    }

    cout << maxFibonacciness << endl;
    }
    return 0;
}