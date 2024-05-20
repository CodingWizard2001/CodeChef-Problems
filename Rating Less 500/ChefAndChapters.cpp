// This semester, Chef took X courses. Each course has Y units and each unit has Z chapters in it. Find the total number of chapters Chef has to study this semester.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfCourse,noOfUnits,noOfChapters;
        cout<<"Enter the total no. of course : ";
        cin>>noOfCourse;
        cout<<"Enter the total no. of units : ";
        cin>>noOfUnits;
        cout<<"Enter the total no. of chapters : ";
        cin>>noOfChapters;
        cout<<"The total number of chapters Chef has to study this semester will be : "<<(noOfCourse * noOfUnits * noOfChapters)<<endl;
    }
}