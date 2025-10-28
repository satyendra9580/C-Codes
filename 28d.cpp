#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
const int MOD = 200000;

long long solve(int n, vector<ull>& nums, const vector<int>& smallPrimes){
    ull g = nums[0];
    for(int i=1;i<n;i++) g = std::gcd(g, nums[i]);
    if(g == 1ULL) return 2;
    for(int p : smallPrimes){
        if(g % p != 0) return p;
    }
    return -1; 
}

int main(){

    vector<char> isPrime(MOD+1, true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=MOD;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=MOD;j+=i) isPrime[j]=false;
        }
    }
    vector<int> primes;
    for(int i=2;i<=MOD;i++) if(isPrime[i]) primes.push_back(i);

    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        int n;
        cin>>n;
        vector<ull> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        long long ans = solve(n, nums, primes);
        cout<<ans<<"\n";
    }
    return 0;
}
