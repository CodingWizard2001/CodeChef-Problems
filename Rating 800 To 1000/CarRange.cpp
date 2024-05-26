// The fuel economy of a car is the distance which it can travel on one litre of fuel. The base fuel economy (i.e, its fuel economy when there is only one person - the driver - in the car) of a certain car is M kilometers per litre. It was also observed that every extra passenger in the car decreases the fuel economy by 1 kilometer per litre. P people want to take this car for a journey. They know that the car currently has V litres of fuel in its tank. What is the maximum distance this car can travel under the given conditions, assuming that all P people always stay in the car and no refuelling can be done?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPeople,economyRangeIn1Liter,noOfLiterFuelCarHave;

        cout<<"Enter the no. of people in the car : ";
        cin>>noOfPeople;

        cout<<"Enter the economy range of the car : ";
        cin>>economyRangeIn1Liter;

        cout<<"Enter the amount of fuel the car have : ";
        cin>>noOfLiterFuelCarHave;

        if(noOfPeople == 1) cout<<"The maximum distance this car can travel will be : "<<(economyRangeIn1Liter * noOfLiterFuelCarHave)<<endl;

        else cout<<"The maximum distance this car can travel will be : "<<((economyRangeIn1Liter - (noOfPeople - 1)) * noOfLiterFuelCarHave)<<endl;
    }
}