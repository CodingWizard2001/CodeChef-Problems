// You are given two positive integers A and B. You need to construct two different binary strings (i.e, they are strings which consist of only 0's and 1's), which satisfy these two conditions:

// 1.  Both the strings should be palindromes.
// 2.  Each string should have exactly A 0's, and exactly B 1's in them.

// Output Yes if two such different binary strings can be constructed and No otherwise.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB;

        // cout<<"Enter the value of A : ";
        cin>>valueOfA;
        // cout<<"Enter the value of B : ";
        cin>>valueOfB;
        
        if((valueOfA % 2 != 0 && valueOfB % 2 != 0) || valueOfA == 1 || valueOfB == 1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}