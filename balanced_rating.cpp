#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i] / 2;  
        sum += b[i];
    }

    for (int i = 0; i < n; i++) {
        if (sum == 0) break;  

        if (a[i] % 2 != 0) { 
            if (sum < 0 && a[i] > 0) { 
                b[i]++;
                sum++;
            } else if (sum > 0 && a[i] < 0) { 
                b[i]--;
                sum--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
