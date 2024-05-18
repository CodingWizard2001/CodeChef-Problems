// According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef. Chef will be required to attend the MasterChef's classes for X weeks, and the cost of classes per week is Y coins. What is the total amount of money that Chef will have to pay?


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfWeeks,cost;
        cout<<"Enter the no. of weeks : ";
        cin>>noOfWeeks;
        cout<<"Enter the cost of classes per week : ";
        cin>>cost;
        cout<<"The total amount of money that Chef will have to pay is : "<<(noOfWeeks * cost)<<endl;
    }
}