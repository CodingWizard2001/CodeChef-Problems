// Chef has a binary strings S of length N, and an integer K. Hitesh wants to maximize the decimal representation of S using K operations of the following type:

// 1.  Type 1: Insert 0 at any position in the string.
// 2.  Type 2: Change any 0 to 1.

// Help Hitesh find the modified string with maximum possible decimal representation after performing at most K operations.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,kOperations;

        // cout<<"Enter the length : ";
        cin>>len;

        // cout<<"Enter the value of K : ";
        cin>>kOperations;

        string str;
        // cout<<"Enter the string : ";
        cin>>str;

        if(str[0] == '0'){
            str[0] = '1';
            kOperations--;
        }
        
        while(kOperations--){
            str += '0';
        }
        
        cout<<str<<endl;
    }
}