// Chef has finally decided to complete all of his pending assignments. There are X assignments where each assignment takes Y minutes to complete. Find whether Chef would be able to complete all the assignments in Z days.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPendingAssignments,completeNeedToTime,completeTime;
        cout<<"Enter the no. of pending assignments : ";
        cin>>noOfPendingAssignments;
        cout<<"Enter time need to complete each assignment : ";
        cin>>completeNeedToTime;
        cout<<"Enter no. of days to complete all assignments : ";
        cin>>completeTime;
        if((noOfPendingAssignments * completeNeedToTime) <= (completeTime * 24 * 60)) cout<<"Chef would be able to complete all the assignments"<<endl;
        else cout<<"Chef would not be able to complete all the assignments"<<endl;
    }
}