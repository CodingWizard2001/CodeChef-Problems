// Chef has just started Programming, he is in first year of Engineering. Chef is reading about Relational Operators. Relational Operators are operators which check relationship between two values. Given two numerical values A and B you need to help chef in finding the relationship between them that is, First one is greater than second or, First one is less than second or, First and second one are equal.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int firstNumber,secondNumber;
        cout<<"Enter the first number : ";
        cin>>firstNumber;
        cout<<"Enter the second number : ";
        cin>>secondNumber;
        if(firstNumber == secondNumber) cout<<"Relational operator used here is : = "<<endl;
        else if(firstNumber > secondNumber) cout<<"Relational operator used here is : > "<<endl;
        else cout<<"Relational operator used here is : < "<<endl;
    }
}