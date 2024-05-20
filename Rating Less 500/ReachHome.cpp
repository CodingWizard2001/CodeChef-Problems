// Chef is hungry and wants to reach home. Chef can travel up to 5 kilo metres on 1 litre of fuel on his motorcycle. Currently, his motorcycle is filled with X litres of fuel and his home is Y kilo metres away. Determine whether Chef can reach his home on his motorcycle or not.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int litersOfFuel,distanceInKiloMeter;
        cout<<"Enter the liters of fuel motorcycle have : ";
        cin>>litersOfFuel;
        cout<<"Enter the distance of chef's home : ";
        cin>>distanceInKiloMeter;
        if((litersOfFuel * 5) >= distanceInKiloMeter) cout<<"Chef can reach his home"<<endl;
        else cout<<"Chef can't reach his home"<<endl; 
    }
}