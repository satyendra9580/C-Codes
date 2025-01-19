#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        // Store the cards for each cow
        vector<vector<int>> cards(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> cards[i][j];
            }
            // Sort the cards for each cow in ascending order
            sort(cards[i].begin(), cards[i].end());
        }

        // Determine the turn order greedily
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            p[i] = i; // Initialize permutation as [0, 1, 2, ..., n-1]
        }

        // Sort the permutation based on the smallest card of each cow
        sort(p.begin(), p.end(), [&](int a, int b) {
            return cards[a][0] < cards[b][0];
        });

        // Simulate the game with the sorted permutation
        vector<int> pointers(n, 0); // Pointers to track which card each cow will play next
        int topCard = -1; // Initial top card of the pile
        bool valid = true;

        for (int round = 0; round < m; round++) {
            for (int i = 0; i < n; i++) {
                int cow = p[i]; // Current cow in the turn order
                // Find the smallest card in the cow's deck that is greater than topCard
                while (pointers[cow] < m && cards[cow][pointers[cow]] <= topCard) {
                    pointers[cow]++;
                }
                if (pointers[cow] == m) {
                    // Cow has no valid card to play
                    valid = false;
                    break;
                }
                // Place the card on the pile
                topCard = cards[cow][pointers[cow]];
                pointers[cow]++;
            }
            if (!valid) {
                break;
            }
        }

        if (valid) {
            // If all cows placed all their cards, output the permutation
            for (int i = 0; i < n; i++) {
                cout << p[i] + 1 << " "; // Convert to 1-based indexing
            }
            cout << endl;
        } else {
            // No valid permutation found
            cout << -1 << endl;
        }
    }

    return 0;
}