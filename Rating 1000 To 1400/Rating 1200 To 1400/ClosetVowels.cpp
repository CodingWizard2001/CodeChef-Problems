// Chef considers a string consisting of lowercase English alphabets beautiful if all the characters of the string are vowels. Chef has a string S consisting of lowercase English alphabets, of length N. He wants to convert S into a beautiful string T. In order to do so, Chef does the following operation on every character of the string:

// 1.  If the character is a consonant, change the character to its closest vowel.
// 2.  If the character is a vowel, don't change it.

// Chef realizes that the final string T is not unique. Chef wonders, what is the total number of distinct beautiful strings T that can be obtained by performing the given operations on the string S. Since the answer can be huge, print it modulo 1e9 + 7.





#include <bits/stdc++.h>
int mod = 1e9 + 7;
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        string s;
        // cout<<"Enter the string : ";
        cin>>s;
        
        long long count = 1;
        for(auto i : s){
            if(i == 'c' || i == 'g' || i == 'l' || i == 'r') count = (count * 2) % mod;
        }
        cout<<count<<endl;
    }
}