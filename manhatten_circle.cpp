// Given a n by m grid consisting of '.' and '#' characters, there exists a whole manhattan circle on the grid. The top left corner of the grid has coordinates (1,1)
// and the bottom right corner has coordinates (n,m).
// Point (a,b) belongs to the manhattan circle centered at (h,k) if |h−a|+|k−b|<r, where r is a positive constant.
// On the grid, the set of points that are part of the manhattan circle is marked as '#'. Find the coordinates of the center of the circle.

// Input

// The first line of each test case contains n and m (1≤n⋅m≤2⋅105) — the height and width of the grid, respectively.

// The next n lines contains m characters '.' or '#'. If the character is '#', then the point is part of the manhattan circle.

// It is guaranteed the sum of n⋅m over all test cases does not exceed 2⋅105 and there is a whole manhattan circle on the grid.

// Output

// For each test case, output the two integers, the coordinates of the center of the circle.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCenter(int n, int m, const vector<string>& grid) {
    int minRow = n, maxRow = -1, minCol = m, maxCol = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                if (i < minRow) minRow = i;
                if (i > maxRow) maxRow = i;
                if (j < minCol) minCol = j;
                if (j > maxCol) maxCol = j;
            }
        }
    }

    int centerRow = (minRow + maxRow) / 2 + 1;
    int centerCol = (minCol + maxCol) / 2 + 1;
    cout << centerRow << " " << centerCol << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        findCenter(n, m, grid);
    }

    return 0;
}
