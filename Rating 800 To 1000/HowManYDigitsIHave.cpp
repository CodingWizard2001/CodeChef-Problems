// Write a program to obtain a number ( N ) from the user and display whether the number is a one digit number, 2 digit number, 3 digit number or more than 3 digit number


#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int digitCount = 0;
    while(number != 0){
        digitCount++;
        number /= 10;
    }
    if(digitCount <= 3) cout<<"No. of digit : "<<digitCount<<endl;
    else cout<<"No. of digit -> more than 3"<<endl;
}