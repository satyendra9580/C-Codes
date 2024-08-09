
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> soldiers(n);
    for (int i = 0; i < n; i++) {
        cin >> soldiers[i];
    }
    
    int max_height = soldiers[0];
    int min_height = soldiers[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (soldiers[i] > max_height) {
            max_height = soldiers[i];
            max_index = i;
        }
        if (soldiers[i] <= min_height) {
            min_height = soldiers[i];
            min_index = i;
        }
    }

    int result = max_index + (n - 1 - min_index);

    if (max_index > min_index) {
        result--;
    }
    
    cout << result << endl;
    
    return 0;
}
