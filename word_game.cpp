#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<vector<string>> players(3, vector<string>(n));  
        map<string, int> wordCount;  

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> players[i][j];
                wordCount[players[i][j]]++;
            }
        }

        vector<int> scores(3, 0);

        for (int i = 0; i < 3; ++i) {
            for (const string& word : players[i]) {
                if (wordCount[word] == 1) scores[i] += 3;
                else if (wordCount[word] == 2) scores[i] += 1;
            }
        }

        cout << scores[0] << " " << scores[1] << " " << scores[2] << endl;
    }

    return 0;
}
