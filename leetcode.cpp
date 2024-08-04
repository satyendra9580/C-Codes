#include <bits/stdc++.h>
using namespace std;

void rangeSum(vector<int>& nums, int n, int left, int right) {
    vector<long long> v;
    for(int i = 0; i < n; i++) {
        long long sum = 0; // Initialize sum here
        for(int j = i; j < n; j++) {
            sum += nums[j];
            v.push_back(sum);
        }
    }
    long long res=0;
    sort(v.begin(),v.end());
    for(int i=left-1;i<right;i++){
        res+=v[i];
    }
    cout<<res;
}

int main() {
     int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    rangeSum(nums, n,1,5);
    return 0;
}
