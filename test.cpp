#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={5,8,7,6,4,9};
	int size1=v.size();
	for(int i=0; i<size1/2; i++){
		int temp=v[i];
		v[i]=v[size1-i-1];
		v[size1-i-1]=temp;
	}

	for(const auto &value: v){
		cout<< value<<" ";
	}
    return 0;
}