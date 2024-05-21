// You are given N integers. Find the count of numbers divisible by K.

#include <iostream>
using namespace std;
int main(){
    int testCase,k;
    cout<<"Enter no. of test cases : ";
    cin>>testCase;    
    cout<<"Enter the value of K : ";
    cin>>k;
    int count = 0;    
    while(testCase--){
        int number;
        cout<<"Enter an number : ";
        cin>>number;
        if(number % k == 0) count++;
    }
    cout<<"The count of numbers divisible by "<<k<<" will be : "<<count<<endl;
    
}