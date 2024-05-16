// You are asked to calculate factorials of some small positive integers.

#include <bits/stdc++.h>
// #include <iostream>
// #include <boost/multiprecision/cpp_int.hpp> -> Header file of boost
// using namespace boost::multiprecision; 
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter the value of x : ";
        cin>>x;
        // cpp_int count = 1; Install boost libary
        long long count = 1;
        for(int i = 2;i <= x;i++){
            count *= i;
        }
        cout<<"Factorial of "<<x<<" will be : "<<count<<endl;
    }
}