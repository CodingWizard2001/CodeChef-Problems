// Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them. The first thing Chefu wanted to do was to calculate the result of his homework — the sum of A and B, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB;
        cout<<"Enter the value of A : ";
        cin>>valueOfA;

        cout<<"Enter the value of B : ";
        cin>>valueOfB;

        int sum = (valueOfA + valueOfB),noOfMatchesNeeded = 0;
        while(sum != 0){
            int digit = (sum % 10);
            if(digit == 0 || digit == 6 || digit == 9) noOfMatchesNeeded += 6;
            else if(digit == 1) noOfMatchesNeeded += 2;
            else if(digit == 2 || digit == 3 || digit == 5) noOfMatchesNeeded += 5;
            else if(digit == 4) noOfMatchesNeeded += 4;
            else if(digit == 7) noOfMatchesNeeded += 3;
            else if(digit == 8) noOfMatchesNeeded += 7;
            sum /= 10;
        }
        cout<<"The number of matches needed : "<<noOfMatchesNeeded<<endl;
    }
}