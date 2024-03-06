#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cards(n);
        priority_queue<int> bonusDeck;

        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
        }

        long long totalPower = 0;

        for (int i = 0; i < n; ++i) {
            if (cards[i] == 0) {
                // Hero card
                if (!bonusDeck.empty()) {
                    totalPower += bonusDeck.top();
                    bonusDeck.pop();
                }
            } else {
                // Bonus card
                bonusDeck.push(cards[i]);
            }
        }

        cout << totalPower << endl;
    }

    return 0;
}
