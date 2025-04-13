#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<unsigned int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        const int bittu = 30;
        vector<int> count(bittu, 0);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < bittu; j++){
                if(arr[i] & (1u << j)){
                    count[j]++;
                }
            }
        }
        
        unsigned long long res = 0;
        for (int i = 0; i < n; i++){
            unsigned long long seenu = 0;
            for (int j = 0; j < bittu; j++){
                if(arr[i] & (1u << j)){
                    seenu += (unsigned long long)(n - count[j]) * (1u << j);
                } else {
                    seenu += (unsigned long long)count[j] * (1u << j);
                }
            }
            res = max(res, seenu);
        }
        
        cout << res <<endl;
    }
    
    return 0;
}
