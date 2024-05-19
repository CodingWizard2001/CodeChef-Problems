// Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int firstNumber,secondNumber,thirdNumber;
        cout<<"Enter the first number : ";
        cin>>firstNumber;
        cout<<"Enter the second number : ";
        cin>>secondNumber;
        cout<<"Enter the third number : ";
        cin>>thirdNumber;
        if(firstNumber > secondNumber && firstNumber > thirdNumber){
            if(secondNumber > thirdNumber) cout<<"Second highest number will be : "<<secondNumber<<endl;
            else cout<<"Second highest number will be : "<<thirdNumber<<endl;
        }
        else if(secondNumber > firstNumber && secondNumber > thirdNumber){
            if(firstNumber > thirdNumber) cout<<"Second highest number will be : "<<firstNumber<<endl;
            else cout<<"Second highest number will be : "<<thirdNumber<<endl;
        }
        else{
            if(firstNumber > secondNumber) cout<<"Second highest number will be : "<<firstNumber<<endl;
            else cout<<"Second highest number will be : "<<secondNumber<<endl;
        }
    }
}