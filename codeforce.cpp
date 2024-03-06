#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n;
        cin >> n;
        
        long long sum = 0;
        while(n != 0){
            sum += n;
            n = ceil((n - 1) / 2.0);  // Use 2.0 to force floating-point division
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
