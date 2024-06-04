// You are given a binary string S of length N. You can perform the following operation on it: 

// 1.  Pick any non-empty even-length subsequence of the string.
// 2.  Suppose the subsequence has length 2k. Then, move the first k characters to the beginning of S and the other k to the end of S (without changing their order).

// What is the lexicographically smallest string that can be obtained after performing this operation several (possibly, zero) times?



#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of string : ";
        cin>>length;

        string s;
        cout<<"Enter the string : ";
        cin>>s;

        if(length <= 2) cout<<"The lexicographically smallest string will be : "<<s<<endl;
        else{
            sort(s.begin(),s.end());
            cout<<"The lexicographically smallest string will be : "<<s<<endl;
        }
    }
}