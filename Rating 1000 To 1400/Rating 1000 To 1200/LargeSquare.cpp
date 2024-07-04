// You are given N identical squares, each with side length A. All the squares have their sides parallel to the x - axis and y - axis. That is, the squares are not tilted. You have to take several (possibly, zero or all) squares and rearrange them to obtain a mega square. The mega square can't have any gap in the enclosed region or have overlapping squares. Also, you cannot rotate any square. Output the side length of the largest mega square that you can obtain.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfSquares,lengthOfSquares;

        // cout<<"Enter the no. of squares : ";
        cin>>noOfSquares;

        // cout<<"Enter the length of squares : ";
        cin>>lengthOfSquares;

        int ans = sqrt(noOfSquares);
        cout<<(ans * lengthOfSquares)<<endl;
    }
}