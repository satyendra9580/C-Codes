#include <iostream>
using namespace std;

int countSuneetWins(int a1, int a2, int b1, int b2) {
    int suneetWins = 0;

    int scenarios[4][4] = {
        {a1, a2, b1, b2},
        {a1, a2, b2, b1},
        {a2, a1, b1, b2},
        {a2, a1, b2, b1}
    };

    for (int i = 0; i < 4; ++i) {
        int a_first = scenarios[i][0], a_second = scenarios[i][1];
        int b_first = scenarios[i][2], b_second = scenarios[i][3];
        
        int suneetPoints = 0, slavicPoints = 0;
        
        // Round 1
        if (a_first > b_first) {
            ++suneetPoints;
        } else if (a_first < b_first) {
            ++slavicPoints;
        }
        
        // Round 2
        if (a_second > b_second) {
            ++suneetPoints;
        } else if (a_second < b_second) {
            ++slavicPoints;
        }
        
        // Check if Suneet wins more rounds than Slavic
        if (suneetPoints > slavicPoints) {
            ++suneetWins;
        }
    }

    return suneetWins;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << countSuneetWins(a1, a2, b1, b2) << endl;
    }
    return 0;
}
