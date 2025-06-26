#include <bits/stdc++.h>
using namespace std;

int minStringValue(string s, int k) {
    vector<int> freq(26, 0);

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    priority_queue<int> pq;
    for (int f : freq) {
        if (f > 0) pq.push(f);
    }
    while (k-- && !pq.empty()) {
        int top = pq.top();
        pq.pop();
        top--;  
        if (top > 0) pq.push(top);
    }

    int result = 0;
    while (!pq.empty()) {
        int f = pq.top(); pq.pop();
        result += f * f;
    }

    return result;
}

int main() {
    string s;
    int k;
    cin >> s >> k;

    cout << minStringValue(s, k) << endl;
    return 0;
}
