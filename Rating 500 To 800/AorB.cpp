// There are two problems in a contest.

// 1. Problem A is worth 500 points at the start of the contest.
// 2. Problem B is worth 1000 points at the start of the contest.

// Once the contest starts, after each minute:

// 1. Maximum points of Problem A reduce by 2 points .
// 2. Maximum points of Problem B reduce by 4 points.

// It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly. Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int timeToSolveX,timeToSolveY;
        cout<<"Enter the time to solve problem X : ";
        cin>>timeToSolveX;
        cout<<"Enter the time to solve problem Y : ";
        cin>>timeToSolveY;
        int firstX = ((500 - (timeToSolveX * 2)) + (1000 - ((timeToSolveX + timeToSolveY) * 4)));
        int firstY = ((1000 - (timeToSolveY * 4)) + (500 - ((timeToSolveX + timeToSolveY) * 2)));
        cout<<"The maximum number of points Chef can score will be : "<<max(firstX,firstY)<<endl;
    }
}