// There are three friends; let's call them A, B, C. They made the following statements:

// 1.  A: "I have x Rupees more than B."
// 2.  B: "I have y rupees more than C."
// 3.  C: "I have z rupees more than A."

// You do not know the exact values of x,y,z. Instead, you are given their absolute values, i.e. X = |x|, Y = |y|, Z = |z|. Find out if there is some way to assign amounts of money to A, B, C such that all of their statements are true.



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
        if(valueOfA == valueOfB && valueOfB == valueOfC && valueOfA == valueOfC) cout<<"no"<<endl;
        else{
            if((valueOfA + valueOfB) == valueOfC || (valueOfA + valueOfC) == valueOfB || (valueOfB + valueOfC) == valueOfA) cout<<"yes"<<endl;
            
            else cout<<"no"<<endl;
        }
    }
}