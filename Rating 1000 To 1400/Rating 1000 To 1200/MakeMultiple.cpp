// Chef has two integers A and B (A≤B). Chef can choose any non-negative integer X and add them to both A and B. Find whether it is possible to make A a divisor of B.



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
        
        if(valueOfB == valueOfA || (valueOfB - valueOfA) >= valueOfA) cout<<"Yes"<<endl;
        
        else cout<<"No"<<endl;
    }
}