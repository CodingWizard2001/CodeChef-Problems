// You are given a list of T integers, for each of them you have to calculate the number of occurrences of the digit 4 in the decimal representation.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number;
        cout<<"Enter the number : ";
        cin>>number;
        int count4 = 0;
        while(number != 0){
            int digit = (number % 10);
            if(digit == 4) count4++;
            number /= 10;
        }
        cout<<"Number of occurrences will be : "<<count4<<endl;
    }
}