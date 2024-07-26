#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        int digit = str[i] - '0'; 
        int inverted_digit = 9 - digit; 
        
        if (inverted_digit < digit) {
            if (i == 0 && inverted_digit == 0) {
                continue;
            }
            str[i] = inverted_digit + '0'; 
        }
    }

    cout << str << endl;

    return 0;
}