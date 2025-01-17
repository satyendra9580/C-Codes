#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==2 || n==3) cout<<"NO SOLUTION"<<endl;
    else {
         vector<int> res;

        // Add all even numbers first
        for (int i = 2; i <= n; i += 2) {
            res.push_back(i);
        }

        // Add all odd numbers next
        for (int i = 1; i <= n; i += 2) {
            res.push_back(i);
        }

        // Output the beautiful permutation
        for (auto &it : res) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}