// There are N bikes and M cars on the road. Each bike has 2 tyres. Each car has 4 tyres. Find the total number of tyres on the road.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfBike,noOfCar;
        cout<<"Enter the no. of bikes : ";
        cin>>noOfBike;
        cout<<"Enter the no. of cars : ";
        cin>>noOfCar;
        cout<<"The total number of tyres on the road will be : "<<((2 * noOfBike) + (4 * noOfCar))<<endl;
    }
}