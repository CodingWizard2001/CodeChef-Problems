// Chef's favorite game is chess. Today, he invented a new piece and wants to see its strengths. From a cell (X,Y), the new piece can move to any cell of the chessboard such that its color is different from that of (X,Y). The new piece is currently located at cell  (A,B). Chef wants to calculate the minimum number of steps required to move it to (P,Q).



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int initialX,initialY,finalX,finalY;

        // cout<<"Enter the initial position of X : ";
        cin>>initialX;

        // cout<<"Enter the initial position of Y : ";
        cin>>initialY;

        // cout<<"Enter the final position of Y : ";
        cin>>finalX;
        
        // cout<<"Enter the final position of Y : ";
        cin>>finalY;
        
        if(initialX == finalX && initialY == finalY) cout<<0<<endl;
        else if((initialX + initialY) % 2 == (finalX + finalY) % 2) cout<<2<<endl;
        else cout<<1<<endl;
    }
}