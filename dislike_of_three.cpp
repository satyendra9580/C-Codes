#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k;
    cin >> k;
    vector<int> res;
    int i = 1;
    while (res.size() < k) {
        int rem = i % 10;
        if (i % 3 == 0 || rem == 3) {
            i++;
            continue;
        }
        res.push_back(i);
        i++;
    }
    cout << res[k - 1] << endl; 
    }
    return 0;
}
