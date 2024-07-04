// Chef has an 8 x 8 chessboard. He placed a knight on the square (X1,Y1). Note that, the square at the intersection of the ith row and jth column is denoted by (i,j). Chef wants to determine whether the knight can end up at the square (X2,Y2) in exactly 100 moves or not. For reference, a knight can move to a square which is:

// 1.  One square horizontally and two squares vertically away from the current square, or

// 2.  One square vertically and two squares horizontally away from the current square



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int x1,y1,x2,y2;

        // cout<<"Enter the initial position of X : ";
        cin>>x1;
        // cout<<"Enter the initial position of Y : ";
        cin>>y1;
        // cout<<"Enter the final position of X : ";
        cin>>x2;
        // cout<<"Enter the final position of Y : ";
        cin>>y2;

        if((x1 + y1) % 2 == (x2 + y2) % 2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}