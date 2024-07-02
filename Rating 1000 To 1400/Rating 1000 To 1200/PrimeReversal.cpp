// You are given two binary strings A and B, each of length N. You can perform the following operation on string A any number of times:

// 1.  Select a prime number X.
// 2.  Choose any substring of string A having length X and reverse the substring.

// Determine whether you can make the string A equal to B using any (possibly zero) number of operations. A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the strings : ";
        cin>>len;
        string str1,str2;
        // cout<<"Enter the first strings : ";
        cin>>str1;
        // cout<<"Enter the second strings : ";
        cin>>str2;
        
        if(count(str1.begin(),str1.end(),'1') == count(str2.begin(),str2.end(),'1')) cout<<"Yes"<<endl;
        
        else cout<<"No"<<endl;
    }
}