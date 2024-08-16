#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> jaggedArray = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    for (int i = 0; i < jaggedArray.size(); i++) {
        for (int j = 0; j < jaggedArray[i].size(); j++) {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}