// There is a circular track of length M consisting of M checkpoints and M bidirectional roads such that each road has a length of 1 unit. Chef is currently at checkpoint A and wants to reach checkpoint B. Find the minimum length of the road he needs to travel.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfClock,checkPointA,checkPointB;
        cout<<"Enter the checkpoint A : ";
        cin>>checkPointA;
        cout<<"Enter the checkpoint B : ";
        cin>>checkPointB;
        cout<<"Enter the length of circular clock : ";
        cin>>lengthOfClock;
        if(checkPointA > checkPointB) swap(checkPointA,checkPointB);
        int totalDistanceInClockwiseDirection = (checkPointB - checkPointA);
        int totalDistanceInCounterClockwiseDirection = checkPointA + (lengthOfClock - checkPointB);
        cout<<"The minimum length of the road he needs to travel will be : "<<min(totalDistanceInClockwiseDirection,totalDistanceInCounterClockwiseDirection)<<endl;
    }
}