#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(2*n);
        for(int i=0;i<2*n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int result=abs(v[n]-v[n-1]);
        cout<<result<<endl;
    }
    return 0;
}

// Reminder: the median of the array [a1,a2,…,a2k+1]
//  of odd number of elements is defined as follows: let [b1,b2,…,b2k+1]
//  be the elements of the array in the sorted order. Then median of this array is equal to bk+1
// .

// There are 2n
//  students, the i
// -th student has skill level ai
// . It's not guaranteed that all skill levels are distinct.

// Let's define skill level of a class as the median of skill levels of students of the class.

// As a principal of the school, you would like to assign each student to one of the 2
//  classes such that each class has odd number of students (not divisible by 2
// ). The number of students in the classes may be equal or different, by your choice. Every student has to be assigned to exactly one class. Among such partitions, you want to choose one in which the absolute difference between skill levels of the classes is minimized.

// What is the minimum possible absolute difference you can achieve?