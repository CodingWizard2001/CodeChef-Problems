// Chef has opened a new airline. Chef has 10 airplanes where each airplane has a capacity of X passengers. On the first day itself, Y people are willing to book a seat in any one of Chef's airplanes. Given that Chef charges Z rupees for each ticket, find the maximum amount he can earn on the first day.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfAirplanes,noOfPassengers,costOfTicket;
        cout<<"Enter the no. of air planes : ";
        cin>>noOfAirplanes;
        cout<<"Enter the no. of passengers : ";
        cin>>noOfPassengers;
        cout<<"Enter the cost of each ticket : ";
        cin>>costOfTicket;
        if((noOfAirplanes * 10) > noOfPassengers) cout<<"The maximum amount he can earn on the first day will be : "<<(noOfPassengers * costOfTicket)<<endl;
        else cout<<"The maximum amount he can earn on the first day will be : "<<((noOfAirplanes * 10) * costOfTicket)<<endl;
    }
}