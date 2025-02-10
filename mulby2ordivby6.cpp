#include <bits/stdc++.h>
using namespace std;

int minMovesToOne(int n) {
    int moves = 0;
    
    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6; 
        } else if (n % 3 == 0) {
            n *= 2; 
        } else {
            return -1;
        }
        moves++;
    }
    
    return moves;
}

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n;
        cout << minMovesToOne(n) << endl;
    }
    
    return 0;
}
