// Write a program to find the factorial value of any number entered by the user.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the number of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number;
        cout<<"Enter a number : ";
        cin>>number;
        long long ans = 1;
        for(int i = 2;i <= number;i++){
            ans *= i;
        }
        cout<<"Factorial of "<<number<<" will be : "<<ans<<endl;
    }
}