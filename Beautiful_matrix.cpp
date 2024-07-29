#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat(5, vector<int>(5));

    // Reading input into the matrix
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> mat[i][j];
        }
    }

    int mi, mj, reqi, reqj;

    // Finding the position of the element with value 1
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(mat[i][j] == 1) {
                mi = i;
                reqi = abs(mi - 2);
                mj = j;
                reqj = abs(mj - 2);
            }
        }
    }

    // Outputting the result
    cout << (reqi + reqj) << endl;

    return 0;
}
