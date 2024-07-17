// Chef has two numbers X and Y. Chef wants to find three integers A,B, and C such that:

// 1.  -1000 ≤ A,B,C ≤ 1000
// 2.  mean([A,B,C]) = X
// 3.  median([A,B,C])=Y

// Can you help Chef find such three integers? 





#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int x,y;
        cin>>x>>y;
        int a = (3 * x - 2 * y);
        cout<<y<<" "<<y<<" "<<a<<endl; 
    }
}