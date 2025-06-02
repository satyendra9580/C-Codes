#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool found = false;
        for(int y = 0; y <= 5000; y++){
            int rem = n - y * 2021;
            if(rem < 0) break;
            if(rem % 2020 == 0){
                found = true;
                break;
            }
        }
        if(found) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
