#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> freq(26, 0);
        for(char c: s) 
            freq[c - 'a']++;
        int oddCount = 0;
        for(int f: freq) 
            if(f & 1) 
                oddCount++;

        int remLen = n - k;

        if(oddCount <= k + (remLen & 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
