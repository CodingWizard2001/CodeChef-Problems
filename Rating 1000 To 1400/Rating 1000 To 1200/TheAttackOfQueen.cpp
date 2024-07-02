// Chef has started developing interest in playing chess, and was learning how the Queen moves. Chef has an empty N x N chessboard. He places a Queen at (X,Y) and wonders - What are the number of cells that are under attack by the Queen?


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
        int horizontal = 2 * (valueOfA - 1);
        int diagonal = 0;

        diagonal += min(valueOfB - 1,valueOfC - 1);

        diagonal += min(valueOfB - 1,valueOfA - valueOfC);
        
        diagonal += min(valueOfA - valueOfB,valueOfC - 1);
        
        diagonal += min(valueOfA - valueOfB,valueOfA - valueOfC);
        
        // cout<<"The number of cells that are under attack by the Queen will be : ";
        cout<<(horizontal + diagonal)<<endl;
    }
}