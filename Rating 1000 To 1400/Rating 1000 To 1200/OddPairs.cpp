// Given an integer N, determine the number of pairs (A,B) such that:

// 1.  1 ≤ A,B ≤ N;
// 2.  A+B is odd.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long num;
        // cout<<"Enter a number : ";
        cin>>num;
        // cout<<"Number of odd pairs : ";
        cout<<((num * num) / 2)<<endl;
    }
}