// In computing, the collection of four bits is called a nibble. Chef defines a program as:

// 1. Good, if it takes exactly X nibbles of memory, where X is a positive integer.
// 2. Not Good, otherwise.

// Given a program which takes N bits of memory, determine whether it is Good or Not Good.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the test cases : ";
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter the value of x : ";
        cin>>x;
        if(x % 4 == 0) cout<<"Program is good"<<endl;
        else cout<<"Program is not good"<<endl;
    }
}