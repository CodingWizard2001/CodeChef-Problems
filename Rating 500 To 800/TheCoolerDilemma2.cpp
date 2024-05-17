// The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:

// 1. Rent a cooler at the cost of X coins per month.
// 2. Purchase a cooler for Y coins.

// Chef wonders what is the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int rentOfCooler,priceOfCooler;
        cout<<"Enter the rent of the cooler : ";
        cin>>rentOfCooler;
        cout<<"Enter the price of the cooler : ";
        cin>>priceOfCooler;
        if(priceOfCooler % rentOfCooler == 0) cout<<"The maximum number of months for which he can rent the cooler will be : "<<(priceOfCooler / rentOfCooler) - 1<<endl;
        else cout<<"The maximum number of months for which he can rent the cooler will be : "<<(priceOfCooler / rentOfCooler)<<endl;
    }
}