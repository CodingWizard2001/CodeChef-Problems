// You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to cross a bridge that can withstand a weight of Z kilograms. Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int mangoWeight,truckWeight,bridgeWithstandLoad;
        cout<<"Enter the weight of mangoes : ";
        cin>>mangoWeight;
        cout<<"Enter the weight of truck : ";
        cin>>truckWeight;
        cout<<"Enter the weight that can withstand by bridge : ";
        cin>>bridgeWithstandLoad;
        cout<<"The maximum number of mangoes can load in the truck so that you can cross the bridge safely will be : "<<((bridgeWithstandLoad - truckWeight) / mangoWeight)<<endl;
    }
}