// You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). Find the maximum length of its contiguous subsequence with an even sum.


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
        int cnt = (number / 2) + (number % 2);
        // If cnt is odd then answer will be -> (number - 1)
        // else answer will be -> number
        if((cnt % 2) == 0) cout<<"The maximum length will be : "<<number<<endl;
        else cout<<"The maximum length will be : "<<(number - 1)<<endl;
    }
}