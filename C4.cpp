#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        string p, s;
        cin >> p >> s;
        
        int i = 0, j = 0;
        bool valid = true;
        
        while(i < p.size() && j < s.size()){
            char c = p[i];
            int countP = 0;
            while(i < p.size() && p[i] == c){
                countP++;
                i++;
            }

            if(s[j] != c){
                valid = false;
                break;
            }
            
            int countS = 0;
            while(j < s.size() && s[j] == c){
                countS++;
                j++;
            }

            if(countS < countP || countS > 2 * countP){
                valid = false;
                break;
            }
        }

        if(i != p.size() || j != s.size()){
            valid = false;
        }
        
       if(valid) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    
    return 0;
}
