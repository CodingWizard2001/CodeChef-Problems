// Chefland has 2 different types of coconut, type A and type B. Type A contains only Xa milliliters of coconut water and type B contains only Xb grams of coconut pulp. Chef's nutritionist has advised him to consume Xa milliliters of coconut water and Xb grams of coconut pulp every week in the summer. Find the total number of coconuts (type A + type B) that Chef should buy each week to keep himself active in the hot weather.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int millilitersOfCoconutWater,gramsOfCoconutPulp,needsToConsumeCoconutWater,needsToConsumeCoconutPulp;
        cout<<"Enter the milliliter of coconut water can extract from a coconut : ";
        cin>>millilitersOfCoconutWater;
        cout<<"Enter the gram of coconut pulp can extract from a coconut : ";
        cin>>gramsOfCoconutPulp;
        cout<<"Enter the total  milliliter of coconut water needs to consume : ";
        cin>>needsToConsumeCoconutWater;
        cout<<"Enter the total  grams of coconut pulp needs to consume : ";
        cin>>needsToConsumeCoconutPulp;
        cout<<"The total number of coconuts that Chef should buy each week will be : "<<(needsToConsumeCoconutWater / millilitersOfCoconutWater) + (needsToConsumeCoconutPulp / gramsOfCoconutPulp)<<endl;
    }
}