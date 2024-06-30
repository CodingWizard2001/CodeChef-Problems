// Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce. We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise. For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of string : ";
        cin>>len;
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        int count = 0;
        for(int i = 0;i < len;i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') count = 0;
            else count++;
            
            if(count >= 4) break;;
        }
        if(count < 4) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}


// Output: 5                 |
//         5                 |
//         apple             |     Yes
//         15                |
//         schtschurowskia   |     No
//         6                 |
//         polish            |     Yes
//         5                 |
//         tryst             |     No
//         3                 |
//         cry               |     Yes