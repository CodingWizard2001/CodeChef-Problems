// Chef is planning to buy a new car for his birthday. After a long search, he is left with 2 choices:

// 1.  Car 1: Runs on diesel with a fuel economy of x1 km/l
// 2.  Car 2: Runs on petrol with a fuel economy of x2 km/l

// Chef also knows that 
// 1.  The current price of diesel is y1 rupees per litre
// 2.  The current price of petrol is y2 rupees per litre

// Assuming that both cars cost the same and that the price of fuel remains constant, which car will minimize Chef's expenses? Print your answer as a single integer in the following format

// 1.  If it is better to choose Car 1, print -1
// 2.  If both the cars will result in the same expenses, print 0
// 3.  If it is better to choose Car 2, print 1


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int economyOfPetrolCar,economyOfDieselCar,currentPriceOfPetrol,currentPriceOfDiesel;
        cout<<"Enter the economy of petrol car : ";
        cin>>economyOfPetrolCar;
        cout<<"Enter the economy of diesel car : ";
        cin>>economyOfDieselCar;
        cout<<"Enter the current price of petrol : ";
        cin>>currentPriceOfPetrol;
        cout<<"Enter the current price of diesel : ";
        cin>>currentPriceOfDiesel;

        float costOfPetrolCar = (currentPriceOfPetrol / float(economyOfPetrolCar));
        float costOfDieselCar = (currentPriceOfDiesel / float(economyOfDieselCar));

        if(costOfPetrolCar == costOfDieselCar) cout<<0<<endl; // If both the cars will result in the same expenses, print 0
        else if(costOfPetrolCar < costOfDieselCar) cout<<-1<<endl; // If it is better to choose Car 1, print -1
        else cout<<1<<endl; //  If it is better to choose Car 2, print 1
    }
}