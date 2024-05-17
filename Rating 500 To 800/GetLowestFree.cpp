// Chef goes to the supermarket to buy some items. Luckily there's a sale going on under which Chef gets the following offer: If Chef buys 3 items then he gets the item (out of those 3 items) having the lowest price as free. Chef buys 3 items having prices A, B and C respectively. What is the amount of money Chef needs to pay?


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no.of test cases : ";
    cin>>testCase;
    while(testCase--){
        int price1,price2,price3;
        cout<<"Enter the price of first thing : ";
        cin>>price1;
        cout<<"Enter the price of second thing : ";
        cin>>price2;
        cout<<"Enter the price of third thing : ";
        cin>>price3;
        int min = 0;
        if(price1 < price2 && price1 < price3) min = price1;
        else{
            if(price2 < price3) min = price2;
            else min = price3;
        }
        cout<<"The amount of money Chef needs to pay will be : "<<(price1 + price2 + price3) - min<<endl;
    }
}