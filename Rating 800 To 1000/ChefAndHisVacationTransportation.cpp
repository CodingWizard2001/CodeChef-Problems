// Vacations have arrived and Chef wants to go to his home in ChefLand. There are two types of routes he can take:

// 1.  Take a flight from his college to ChefArina which takes X minutes and then take a bus from ChefArina to ChefLand which takes Y minutes.
// 2.  Take a direct train from his college to ChefLand which takes Z minutes.

// Which of these two options is faster?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int timeTakeByPlane,timeTakeByBus,timeTakeByTrain;
        cout<<"Enter the time taken by Plane : ";
        cin>>timeTakeByPlane;
        cout<<"Enter the time taken by Bus : ";
        cin>>timeTakeByBus;
        cout<<"Enter the time taken by Train : ";
        cin>>timeTakeByTrain;
        if((timeTakeByPlane + timeTakeByBus) == timeTakeByTrain) cout<<"He can choose anything"<<endl;
        else  if((timeTakeByPlane + timeTakeByBus) < timeTakeByTrain) cout<<"He should choose first Plane then Bus"<<endl;
        else cout<<"He should choose Train"<<endl;
    }
}