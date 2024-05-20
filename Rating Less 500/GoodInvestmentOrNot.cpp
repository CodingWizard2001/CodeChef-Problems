// Chef has invested his money at an interest rate of X percent per annum while the current inflation rate is Y percent per annum. An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate. Determine whether the investment made by Chef is good or not.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int interestRate,inflationRate;
        cout<<"Enter the interest rate of investment : ";
        cin>>interestRate;
        cout<<"Enter the inflation rate of investment : ";
        cin>>inflationRate;
        if((inflationRate * 2) <= interestRate) cout<<"The investment made by Chef is good"<<endl;
        else cout<<"The investment made by Chef is not good"<<endl;
    }
}