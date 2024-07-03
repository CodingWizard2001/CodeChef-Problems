// A binary string is called alternating if no two adjacent characters of the string are equal. Formally, a binary string T of length M is called alternating if Ti not equal to Ti+1 for each 1 ≤ i < M. You are given a binary string S of length N. You would like to rearrange the characters of S such that the length of the longest alternating substring of S is maximum. Find this maximum value. A binary string is a string that consists of characters 0 and 1. A string a is a substring of a string b if a can be obtained from b by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,amount;
        // cout<<"Enter the length of array : ";
        cin>>len;
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        int countZero = 0,countOne = 0;
        for(int i = 0;i < len;i++){
            if(str[i] == '0') countZero++;
            else countOne++;
        }
        if(countOne == 0 || countOne == len || countZero == 0 || countZero == len) cout<<1<<endl;

        else if(countZero == countOne) cout<<(2 * countOne)<<endl;
        
        else cout<<2 * min(countZero,countOne) + 1<<endl;
    }
}