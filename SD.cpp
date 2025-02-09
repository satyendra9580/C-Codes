#include <bits/stdc++.h>
using namespace std;
 
struct ArrayData {
    long long T; 
    long long S; 
};
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<ArrayData> arr(n);
        long long seenu = 0;
        
        for (int i = 0; i < n; i++){
            long long pahle = 0;
            long long s = 0;
            long long pooraSum = 0; 
            for (int j = 0; j < m; j++){
                int x;
                cin >> x;
                pahle += x;   
                s += pahle;   
                pooraSum += x;
            }
            arr[i].T = pooraSum;
            arr[i].S = s;
            seenu += s;
        }
        
                sort(arr.begin(), arr.end(), [](const ArrayData &a, const ArrayData &b) {
            return a.T > b.T;
        });
        long long zyada = 0;
        for (int i = 0; i < n; i++){
            zyada += arr[i].T * (n - 1 - i);
        }
        zyada *= m;
        
        long long ans = seenu + zyada;
        cout << ans << "\n";
    }
    
    return 0;
}
