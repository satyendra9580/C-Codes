#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minSwapsToBeautiful(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> indexed_arr(n);
    for (int i = 0; i < n; i++) {
        indexed_arr[i] = {arr[i], i};
    }

    sort(indexed_arr.begin(), indexed_arr.end());
    vector<bool> visited(n, false);
    int asc_swaps = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] || indexed_arr[i].second == i)
            continue;
        
        int cycle_size = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = indexed_arr[j].second;
            cycle_size++;
        }
        
        asc_swaps += (cycle_size - 1);
    }

    sort(indexed_arr.begin(), indexed_arr.end(), greater<pair<int, int>>());
    fill(visited.begin(), visited.end(), false);
    int desc_swaps = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] || indexed_arr[i].second == i)
            continue;
        
        int cycle_size = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = indexed_arr[j].second;
            cycle_size++;
        }
        
        desc_swaps += (cycle_size - 1);
    }

    return min(asc_swaps, desc_swaps);
}

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int result = minSwapsToBeautiful(arr);
    cout << result << endl;
    
    return 0;
}