// We have found a new chess character — pook. It has the qualities of both a rook and a pawn. Specifically, treating the chessboard to be an N x N grid where (i,j) denotes the intersection of the i-th row and the j-th column, a pook placed at square (x,y) threatens the following squares:

// 1.  (i,y) for every 1 ≤ i ≤ N
// 2.  (x,i) for every 1 ≤ i ≤ N
// 3.  (x + 1,y - 1), if x < N and y ≥ 2
// 4.  (x + 1,y + 1), if x < N and y < N

// Find the maximum number of pooks that can be placed on an empty N x N chessboard such that none of them threaten each other.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int num;
        // cout<<"Enter a number : ";
        cin>>num;
        if(num == 1) cout<<1<<endl;
        else if(num < 4) cout<<(num - 1)<<endl;
        else cout<<num<<endl;
    }
}