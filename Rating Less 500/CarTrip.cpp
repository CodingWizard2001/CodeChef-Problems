// Chef rented a car for a day. Usually, the cost of the car is Rs 10 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 300 kms even if the car runs less than 300 kms. If the car ran X kms, determine the cost Chef needs to pay.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int kilometers;
        cout<<"Enter the kilometers chef's car run : ";
        cin>>kilometers;
        if(kilometers <= 300) cout<<"The cost Chef needs to pay will be : "<<(300 * 10)<<endl;
        else cout<<"The cost Chef needs to pay will be : "<<(kilometers * 10)<<endl;
    }
}