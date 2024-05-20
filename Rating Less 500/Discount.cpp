// Alice buys a toy with a selling price of 100 rupees. There is a discount of x percent on the toy. Find the amount Alice needs to pay for it.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int discountOffer;
        cout<<"Enter the discount offer : ";
        cin>>discountOffer;
        cout<<"Alice needs to pay : "<<(100 - discountOffer)<<endl;
    }
}