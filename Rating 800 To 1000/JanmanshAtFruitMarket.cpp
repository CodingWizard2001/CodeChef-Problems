// Janmansh is at the fruit market to buy fruits for Chingari. There is an infinite supply of three different kinds of fruits with prices A, B and C. He needs to buy a total of X fruits having at least 2 different kinds of fruits. What is the least amount of money he can spend to buy fruits?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int totalXFruit,fruitPriceOfA,fruitPriceOfB,fruitPriceOfC;

        cout<<"Enter the total price of fruit he needs to buy : ";
        cin>>totalXFruit;

        cout<<"Enter the price of fruit A : ";
        cin>>fruitPriceOfA;

        cout<<"Enter the price of fruit B : ";
        cin>>fruitPriceOfB;

        cout<<"Enter the price of fruit C : ";
        cin>>fruitPriceOfC;

        int mini = 0,secondMini = 0;

        if(fruitPriceOfA <= fruitPriceOfB && fruitPriceOfA <= fruitPriceOfC){
            mini = fruitPriceOfA;

            if(fruitPriceOfB <= fruitPriceOfC) secondMini = fruitPriceOfB;

            else secondMini = fruitPriceOfC;
        }
        
        else if(fruitPriceOfB <= fruitPriceOfA && fruitPriceOfB <= fruitPriceOfC){
            mini = fruitPriceOfB;

            if(fruitPriceOfA <= fruitPriceOfC) secondMini = fruitPriceOfA;

            else secondMini = fruitPriceOfC;
        }
        else{
            mini = fruitPriceOfC;

            if(fruitPriceOfA <= fruitPriceOfB) secondMini = fruitPriceOfA;

            else secondMini = fruitPriceOfB;
        }

        cout<<"The least amount of money he can spend to buy fruits will be : "<<((totalXFruit - 1) * mini) + (1 * secondMini)<<endl;
    }
}