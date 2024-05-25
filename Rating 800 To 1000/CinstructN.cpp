// You are given an integer N. Find if it is possible to represent N as the sum of several(possibly zero) 2's and several(possibly zero) 7's. Formally, find if there exist two integers X,Y (X,Y ≥ 0) such that 2 ⋅ X + 7 ⋅ Y = N.

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
        if((number % 7) % 2 != 0 && number < 7) cout<<"There doesn't exist 2 integers"<<endl;
        else cout<<"There exist 2 integers"<<endl;
    }
}