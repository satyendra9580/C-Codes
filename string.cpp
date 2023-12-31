// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isPalindrome(string s) {
        string result="";
        string result2="";
        for(int i=0; i< s.length(); i++){
            char c=s[i];
            if(isalnum(c)){
                result +=c;    
            }
        }
      
        string str1="";
    //string duplicate=s;
    for(int i=s.length()-1; i>=0; i--){
        str1 +=s[i];
        
    }
    for(int i=0; i< str1.length(); i++){
            char c1=str1[i];
            if(isalnum(c1)){
                result2 +=c1;    
            }
        }
        //   cout<<result2<<endl;
        //     cout<<result;
    if(result2==s){
        cout<<"palindrome";
    }
    else{
         cout<<"not palindrome";
    }
        
    }
int main() {
    string str="A man, a plan, a canal: Panama";
    isPalindrome(str);
    return 0;
}