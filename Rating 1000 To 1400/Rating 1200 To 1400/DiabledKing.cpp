// Chef loves Chess and has thus invented a new piece named "Disabled King". Let's denote the cell at the intersection of the i-th column from the left and j-th row from the top by (i,j). If he is currently in cell (x,y), the disabled king can move to the following positions in one move (provided that he remains in the chessboard):

// 1.  (x,y+1)

// 2.  (x,y - 1)

// 3.  (x + 1,y + 1)

// 4.  (x + 1,y - 1)

// 5.  (x - 1,y + 1)

// 6.  (x - 1,y - 1)

// In short, the Disabled King cannot move horizontally. In an N x N chessboard, the Disabled King is currently situated at the top-left corner (cell (1,1)) and wants to reach the top-right corner (cell (N,1)). Determine the minimum number of moves in which the task can be accomplished.




#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int position;
        // cout<<"Enter the position of chef : ";
        cin>>position;
        
        if(position % 2 == 0) cout<<position<<endl;
        else cout<<(position - 1)<<endl;
    }
}