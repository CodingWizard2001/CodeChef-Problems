// For the upcoming semester, the admins of your university decided to keep a total of X seats for the MATH-1 course. A student interest survey was conducted by the admins and it was found that Y students were interested in taking up the MATH-1 course. Find the minimum number of extra seats that the admins need to add into the MATH-1 course to make sure that every student who is interested in taking the course would be able to do so.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfSeat,noOfInterestCandidate;
        cout<<"Enter the no. of seat for the Math-1 Course : ";
        cin>>noOfSeat;
        cout<<"Enter the no. of interest candidate for taking up Math-1 Course : ";
        cin>>noOfInterestCandidate;
        if(noOfSeat >= noOfInterestCandidate) cout<<"The minimum number of extra seats are required : "<<0<<endl;
        else cout<<"The minimum number of extra seats are required : "<<(noOfInterestCandidate - noOfSeat)<<endl;
    }
}