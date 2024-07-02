// You are given two numbers A and B along with an integer X. In one operation you can do one of the following:

// 1.  Set A = A + X and B = B - X
// 2.  Set A = A - X and B = B + X

// Determine if you can make A and B equal after applying the operation any number of times (possibly zero).



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB,valueOfX;
        // cout<<"Enter the value of A : ";
        cin>>valueOfA;
        // cout<<"Enter the value of B : ";
        cin>>valueOfB;
        // cout<<"Enter the value of X : ";
        cin>>valueOfX;
        int diff = abs(valueOfA - valueOfB);
        (diff % (2 * valueOfX) == 0) ? cout<<"Yes" : cout<<"No";
        cout<<endl;
    }
}