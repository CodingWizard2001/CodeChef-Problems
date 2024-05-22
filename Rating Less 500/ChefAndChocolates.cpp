// Chef wants to gift C chocolates to Botswal on his birthday. However, he has only X chocolates with him.The cost of 1 chocolate is Y rupees. Find the minimum money in rupees Chef needs to spend so that he can gift C chocolates to Botswal.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfChocolateWantsToGift,chocolateAlreadyHave,costOfEachChocolate;
        cout<<"Enter no. of chocolate wants to gift : ";
        cin>>noOfChocolateWantsToGift;
        cout<<"Enter no. of chocolates already have : ";
        cin>>chocolateAlreadyHave;
        cout<<"Enter the cost of each chocolate : ";
        cin>>costOfEachChocolate;
        cout<<"The minimum money in rupees Chef needs to spend will be : "<<((noOfChocolateWantsToGift - chocolateAlreadyHave) * costOfEachChocolate)<<endl;
    }
}