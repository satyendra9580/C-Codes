// Leo has developed a new programming language C+=. In C+=, integer variables can only be changed with a "+=" operation that adds the right-hand side value to the left-hand side variable. For example, performing "a += b" when a = 2
// , b = 3
//  changes the value of a to 5
//  (the value of b does not change).

// In a prototype program Leo has two integer variables a and b, initialized with some positive values. He can perform any number of operations "a += b" or "b += a". Leo wants to test handling large integers, so he wants to make the value of either a or b strictly greater than a given value n
// . What is the smallest number of operations he has to perform?

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
    cin>>a>>b>>n;
    int count=0;
    while(a<=n && b<=n){
        if(a<b){
            a=a+b;
        }
        else{
            b=b+a;
        }   
        count++;
    }
    cout<<count<<endl;

    }
    
    return 0;
}