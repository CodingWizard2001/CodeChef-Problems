// An airline operates X aircraft every day. Each aircraft can carry up to 100 passengers. One day, N passengers would like to travel to the same destination. What is the minimum number of new planes that the airline must buy to carry all N passengers?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the test cases : ";
    cin>>t;
    while(t--){
        int currentAircraft,passengerNumber;
        cout<<"Enter no. of aircraft already have : ";
        cin>>currentAircraft;
        cout<<"Enter total passenger have come : ";
        cin>>passengerNumber;
        int requiredAircraft = 0;
        if(passengerNumber % 100 == 0) requiredAircraft = (passengerNumber / 100);
        else requiredAircraft = (passengerNumber / 100) + 1;
        if(requiredAircraft > currentAircraft) cout<<"The minimum number of new planes that the airline must buy to carry all "<<passengerNumber<<" passengers will be : "<<(requiredAircraft - currentAircraft)<<endl;
        else cout<<"The minimum number of new planes that the airline must buy to carry all "<<passengerNumber<<" passengers will be : "<<0<<endl;
    }
}