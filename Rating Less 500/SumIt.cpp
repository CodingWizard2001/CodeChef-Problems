// Bob received an assignment from his school: he has two numbers A and B, and he has to find the sum of these two numbers. Alice, being a good friend of Bob, told him that the answer to this question is C. Bob doesn't completely trust Alice and asked you to tell him if the answer given by Alice is correct or not. If the answer is correct print "YES", otherwise print "NO" (without quotes).

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number1,number2,number3;
        cout<<"Enter the first number : ";
        cin>>number1;
        cout<<"Enter the second number : ";
        cin>>number2;
        cout<<"Enter the third number : ";
        cin>>number3;
        if((number1 + number2) == number3) cout<<"Alice is correct"<<endl;
        else cout<<"Alice is incorrect"<<endl;
    }
}