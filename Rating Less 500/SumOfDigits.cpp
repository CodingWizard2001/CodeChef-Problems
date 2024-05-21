// You're given an integer N. Write a program to calculate the sum of all the digits of N.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number;
        cout<<"Enter a number : ";
        cin>>number;
        int sum = 0;
        while(number != 0){
            int digit = (number % 10);
            sum += digit;
            number /= 10;
        }
        cout<<"Sum of all the digits of "<<number<<" will be : "<<sum<<endl;
    }
}