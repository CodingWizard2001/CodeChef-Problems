// There are 3 hidden numbers A, B, C. You somehow found out the values of min(A,B),min(B,C), and min(C,A). Determine whether there exists any tuple (A,B,C) that satisfies the given values of min(A,B),min(B,C),min(C,A).


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB,valueOfC;

        // cout<<"Enter the value of A : ";
        cin>>valueOfA;
        // cout<<"Enter the value of B : ";
        cin>>valueOfB;
        // cout<<"Enter the value of C : ";
        cin>>valueOfC;
        
        int mini1 = min(valueOfA,valueOfB);
        int mini2 = min(valueOfB,valueOfC);
        int mini3 = min(valueOfA,valueOfC);
        
        if(mini1 == mini2 && mini2 == mini3) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}