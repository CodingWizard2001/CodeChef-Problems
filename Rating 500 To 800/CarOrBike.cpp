// Chef wants to reach home as soon as possible. He has two options:

// 1. Travel with his BIKE which takes X minutes.
// 2. Travel with his CAR which takes Y minutes.

// Which of the two options is faster or do they both take same time?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int bike,car;
        cout<<"Enter the time taken if he go by bike : ";
        cin>>bike;
        cout<<"Enter the time taken if he go by Car : ";
        cin>>car;
        if(bike == car) cout<<"Both will reach at same time"<<endl;
        else if(bike > car) cout<<"Car will reach first"<<endl;
        else cout<<"Bike will reach first"<<endl;
    }
}