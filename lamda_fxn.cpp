#include<bits/stdc++.h>
using namespace std;
int main(){
    // int x=10;
    // auto print=[&x](){
    //     x++;
    // };
    // print();
    // cout<<x<<endl;

    vector<int> nums = {4, 2, 3, 1};
sort(nums.begin(), nums.end(), [](int a, int b) {
    return a < b;
});
for(int num : nums) {
    cout << num << " ";
}
    return 0;
}