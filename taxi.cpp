#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int minTaxisNeeded(int n, vector<int> groupSizes) {
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    
    // Count the number of groups of each size
    for (int size : groupSizes) {
        if (size == 1) count1++;
        else if (size == 2) count2++;
        else if (size == 3) count3++;
        else if (size == 4) count4++;
    }
    
    // Start with taxis for groups of 4
    int taxis = count4;
    
    // Pair groups of size 3 with groups of size 1
    int pairThreesWithOnes = min(count3, count1);
    taxis += pairThreesWithOnes;
    count3 -= pairThreesWithOnes;
    count1 -= pairThreesWithOnes;
    
    // Remaining groups of size 3 each need a taxi
    taxis += count3;
    
    // Pair groups of size 2
    taxis += count2 / 2;
    if (count2 % 2 != 0) {
        taxis += 1;
        count1 -= min(2, count1);
    }
    
    // Remaining groups of size 1
    if (count1 > 0) {
        taxis += (count1 + 3) / 4;
    }
    
    return taxis;
}

int main() {
    int n;
    cout<<"Enter the group size: ";
    cin >> n;
    
    vector<int> groupSizes(n);
    cout<<"Enter the group elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> groupSizes[i];
    }
    
    cout<<"Number of taxi needed is: " << minTaxisNeeded(n, groupSizes) << endl;
    
    return 0;
}
