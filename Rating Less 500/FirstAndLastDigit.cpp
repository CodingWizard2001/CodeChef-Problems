// Given an integer N . Write a program to obtain the sum of the first and last digits of this number.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number;
        cout<<"Enter an number : ";
        cin>>number;
        int last = (number % 10);
        int first = 0;
        while(number != 0){
            int digit = (number % 10);
            first = digit;
            number /= 10;
        }
        cout<<"The sum of the first and last digits of Will be : "<<(first + last)<<endl;
    }
}