// Given an Integer N, write a program to reverse it.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter a number : ";
        cin>>x;
        int reverse = 0;
        while(x > 0){
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        cout<<"In reverse : "<<reverse<<endl<<endl;
    }
}