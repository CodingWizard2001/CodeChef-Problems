// There are two exits in a bus with 100 seats:

// 1. First exit is located beside seat number 1
// 2. Second exit is located beside seat number 100.

// Seats are arranged in a straight line from 1 to 100 with equal spacing between any 2 adjacent seats. A passenger prefers to choose the nearest exit while leaving the bus. Determine the exit taken by passenger sitting on seat X.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter passenger's seat no : ";
        cin>>x;
        if(x <= 50) cout<<"Passenger should choose left door"<<endl<<endl;
        else cout<<"Passenger should choose right door"<<endl<<endl;
    }
}