// Chef has fallen in love with Cheffina, and wants to buy N gifts for her. On reaching the gift shop, Chef got to know the following two things: 

// 1. The cost of each gift is 1 coin.
// 2. On the purchase of every 4th gift, Chef gets the 5 th gift free of cost.

// What is the minimum number of coins that Chef will require in order to come out of the shop carrying N gifts?


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int giftNumber;
        cout<<"Enter the gift chef buy : ";
        cin>>giftNumber;
        cout<<"The minimum number of coins that Chef will require in order to come out of the shop carrying "<<giftNumber<<" gifts will be : "<<(giftNumber - (giftNumber / 5))<<endl;
    }
}