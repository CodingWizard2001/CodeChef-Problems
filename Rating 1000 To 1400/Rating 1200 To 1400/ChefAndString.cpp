// Chef has a string S consisting of lowercase English characters. Chef defined functions left shift L(X) and right shift R(X) as follows.

// 1.  L(X) is defined as shifting all characters of string X one step towards left and moving the first character to the end.
// 2.  R(X) is defined as shifting all characters of string X one step towards the right and moving the last character to the beginning.

// Chef wants to find out whether there exists a string V of the same length as S such that both L(V) = S and R(V)=S holds.



#include <bits/stdc++.h>
using namespace std;

// lShift Operation
string lShift(string str){
    return str.substr(1,str.length() - 1) + str.substr(0,1);
}

// rShift Operation
string rShift(string str){
    return str.back() + str.substr(0,str.length() - 1);
}
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str;
        // cout<<"Enter the string : ";
        cin>>str;

        cout<<((lShift(str) == rShift(str)) ? "YES" : "NO")<<endl;
    }
}