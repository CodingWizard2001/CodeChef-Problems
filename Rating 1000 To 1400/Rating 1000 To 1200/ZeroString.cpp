// You are given a binary string S of length N. You are allowed to perform the following types of operations on string S:

// 1.  Delete any one character from S, and concatenate the remaining parts of the string. 
// 2.  lip all the characters of S

// Given that you can use either type of operation any number of times, find the minimum number of operations required to make all characters of the string S equal to 0.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size;
        // cout<<"Enter the size of the string : ";
        cin>>size;
        string s;
        // cout<<"Enter the string : ";
        cin>>s;
        int z = count(s.begin(),s.end(),'0');
        int ans = (z < ( size - z)) ? (z + 1) : (size - z);

        // cout<<"Minimum operation required : ";
        cout<<ans<<endl;
    }
}