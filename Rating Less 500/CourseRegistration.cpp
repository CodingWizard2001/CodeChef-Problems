// There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudentsWants,maximumCapacity,noOfStudentAlreadyJoin;
        cout<<"Enter no. of students wants to enroll : ";
        cin>>noOfStudentsWants;
        cout<<"Enter the maximum capacity : ";
        cin>>maximumCapacity;
        cout<<"Enter no. of students already enrolled : ";
        cin>>noOfStudentAlreadyJoin;
        if((noOfStudentsWants + noOfStudentAlreadyJoin) <= maximumCapacity) cout<<"It will still be possible for all the "<<noOfStudentsWants<<" friends to enroll together"<<endl;
        else cout<<"It is impossible for all the "<<noOfStudentsWants<<" friends to enroll together"<<endl;
    }
}