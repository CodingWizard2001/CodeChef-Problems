// Alice and Bob are very good friends and they always distribute all the eatables equally among themselves.Alice has A chocolates and Bob has B chocolates. Determine whether Alice and Bob can distribute all the chocolates equally among themselves.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfChocolateAliceHave,noOfChocolateBobHave;
        cout<<"Enter the no. of chocolate Alice have : ";
        cin>>noOfChocolateAliceHave;

        cout<<"Enter the no. of chocolate Bob have : ";
        cin>>noOfChocolateBobHave;

        (noOfChocolateAliceHave + noOfChocolateBobHave) % 2 == 0 ? cout<<"Alice and Bob can distribute all the chocolates equally among themselves"<<endl : cout<<"Alice and Bob can't distribute all the chocolates equally among themselves"<<endl;
    }
}