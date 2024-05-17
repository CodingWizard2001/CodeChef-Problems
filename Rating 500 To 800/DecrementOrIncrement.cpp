// Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    if(number % 4 == 0) cout<<"The value will be : "<<--number<<endl;
    else cout<<"The value will be : "<<--number<<endl;
}