// Some time ago, Chef bought X stocks at the cost of Rs. Y each. Today, Chef is going to sell all these X stocks at Rs. Z each. What is Chef's total profit after he sells them?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStock,buyingCostOfStock,sellingCostOfStock;
        cout<<"Enter the no. of stock : ";
        cin>>noOfStock;
        cout<<"Enter the stock buying cost : ";
        cin>>buyingCostOfStock;
        cout<<"Enter the stock selling cost : ";
        cin>>sellingCostOfStock;
        cout<<"Chef's profit : "<<(abs((noOfStock * buyingCostOfStock) - (noOfStock * sellingCostOfStock)))<<endl;
    }
}