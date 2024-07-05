// You are given two positive integers A and B. Find the number of pairs of positive integers (X,Y) such that 1 ≤ X ≤ A, 1 ≤ Y ≤ B and X + Y is even.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long valueOfA,valueOfB;

        // cout<<"Enter the value of a : ";
        cin>>valueOfA;
        // cout<<"Enter the value of b : ";
        cin>>valueOfB;
        long long evenCountOfA = valueOfA / 2;
        long long evenCountOfB = valueOfB / 2;
    
        long long pairs = (valueOfA * valueOfB) - (valueOfA - evenCountOfA) * evenCountOfB - (valueOfB - evenCountOfB) * evenCountOfA;

        cout<<pairs<<endl;
    }
}