#include <bits/stdc++.h>
using namespace std;

int problemGenerator(int n, int m, string s) {
    // Initialize counters for each problem difficulty
    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0, countF = 0, countG = 0;
    
    // Count occurrences of each difficulty in the given problems
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') countA++;
        else if (s[i] == 'B') countB++;
        else if (s[i] == 'C') countC++;
        else if (s[i] == 'D') countD++;
        else if (s[i] == 'E') countE++;
        else if (s[i] == 'F') countF++;
        else if (s[i] == 'G') countG++;
    }
    
    // Calculate the number of additional problems needed for each difficulty
    int needA = max(0, m - countA);
    int needB = max(0, m - countB);
    int needC = max(0, m - countC);
    int needD = max(0, m - countD);
    int needE = max(0, m - countE);
    int needF = max(0, m - countF);
    int needG = max(0, m - countG);
    
    // Sum up the additional problems needed
    int totalNeeded = needA + needB + needC + needD + needE + needF + needG;
    
    return totalNeeded;
}

int main() {
        int n, m;
        string s;
        cin >> n >> m >> s;
        int answer = problemGenerator(n, m, s);
        cout << answer << endl;
    
    return 0;
}
