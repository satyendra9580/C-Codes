#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int k)
{
//     int len = 0;
   
//     for (int i = 0; i < n; i++)
//     {
//          int sum = 0;
//         for (int j = i; j <= n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 sum = sum + arr[k];
//                 if (sum-k==0)
//                 {
//                     len = max(len, j - i + 1);
//                 }
//             }
//         }
//     }
//     cout << len;


int left=0;
int right=0;
long long sum=0;
int len=0;
while(right<n){
    while(left<=right && sum>k){
        sum=sum-arr[left];
        left++;
    }
    if(sum==k){
        len=max(len, right-left+1);
    }
    right++;
    if(right<n){
        sum=sum+arr[right];
    }

}
cout<<len;
}
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    longestSubarray(arr, n, k);
    return 0;
}