#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end(),greater<long long>());
    long long sum=0;


// optimal approach

    long long fullCycles = m / (k + 1);
    long long remaining = m % (k + 1);

    sum += fullCycles * (k * v[0] + v[1]);
    sum += remaining * v[0];


//Using loop we can do but not optimal for large test cases it gives TLE 

    long long count=0;
     while (m > 0) {
        if (count < k) {
            sum += v[0];
            count++;
        } else {
            sum += v[1];
            count = 0; 
        }
        m--; 
    }

    cout<<sum<<endl;
    return 0;
}