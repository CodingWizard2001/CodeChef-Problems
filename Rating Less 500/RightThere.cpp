// Chef wants to host a party with a total of N people. However, the party hall has a capacity of X people. Find whether Chef can host the party.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPeople,capacityOfHall;
        cout<<"Enter the no. of people chef invited : ";
        cin>>noOfPeople;
        cout<<"Enter the capacity of the hall : ";
        cin>>capacityOfHall;
        if(noOfPeople <= capacityOfHall) cout<<"Chef can host the party"<<endl;
        else cout<<"Chef can't host the party"<<endl;
    }
}