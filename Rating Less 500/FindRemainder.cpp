// Write a program to find the remainder when an integer A is divided by an integer B.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number1,number2;
        cout<<"Enter the first number : ";
        cin>>number1;
        cout<<"Enter the second number : ";
        cin>>number2;
        cout<<"If we divide "<<number1<<" / "<<number2<<" then remainder will be : "<<(number1 % number2)<<endl;
    }
}