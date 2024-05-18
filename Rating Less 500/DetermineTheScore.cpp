// Chef appeared for a placement test. There is a problem worth X points. Chef finds out that the problem has exactly 10 test cases. It is known that each test case is worth the same number of points. Chef passes N test cases among them. Determine the score Chef will get.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int problemPoints,passedTestCase;
        cout<<"Enter the total value of the problems : ";
        cin>>problemPoints;
        cout<<"Enter the total no. of test cases chef passed : ";
        cin>>passedTestCase;
        cout<<"The score Chef will get : "<<(passedTestCase * (problemPoints / 10))<<endl;
    }
}