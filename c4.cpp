#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countOccurrencesInSpiral(const vector<vector<int>>& grid, int target) {
    string targetStr = to_string(target);
    string spiralOrder = "";

    int rows = grid.size();
    int cols = grid[0].size();
    int numLayers = min(rows, cols) / 2;

    for (int layer = 0; layer < numLayers; ++layer) {
        int top = layer;
        int bottom = rows - layer - 1;
        int left = layer;
        int right = cols - layer - 1;

        for (int i = left; i <= right; ++i) {
            spiralOrder += to_string(grid[top][i]);
        }
        for (int i = top + 1; i <= bottom; ++i) {
            spiralOrder += to_string(grid[i][right]);
        }
        if (bottom > top) {
            for (int i = right - 1; i >= left; --i) {
                spiralOrder += to_string(grid[bottom][i]);
            }
        }
        if (left < right) {
            for (int i = bottom - 1; i > top; --i) {
                spiralOrder += to_string(grid[i][left]);
            }
        }
    }

    int count = 0;
    size_t pos = 0;
    while ((pos = spiralOrder.find(targetStr, pos)) != string::npos) {
        count++;
        pos += targetStr.length();
    }

    return count;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> carpet(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> carpet[i][j];
            }
        }
        int favoriteNumber = 1543;
        int result = countOccurrencesInSpiral(carpet, favoriteNumber);
        cout << result << endl;
    }

    return 0;
}
