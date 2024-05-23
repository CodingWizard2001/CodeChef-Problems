// Chef invented a modified wordle. There is a hidden word S and a guess word T, both of length 5. Chef defines a string M to determine the correctness of the guess word. For the ith index:

// 1.  If the guess at the ith index is correct, the ith character of M is G.
// 2.  If the guess at the ith index is wrong, the ith character of M is B.

// Given the hidden word S and guess T, determine string M.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string modifiedWordle,guessString;
        cout<<"Enter modified wordle : ";
        cin>>modifiedWordle;
        cout<<"Enter the guess string : ";
        cin>>guessString;
        string defineString = "";
        int idx = 0;
        while(idx < modifiedWordle.length()){
            if(modifiedWordle[idx] != guessString[idx]){
                defineString += 'B';
            }
            else defineString += 'G';
            idx++;
        }
        cout<<"The define string will be : "<<defineString<<endl;
    }
}