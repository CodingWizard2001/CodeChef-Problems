// Chef was driving on a highway at a speed of X km/hour. To avoid accidents, there are fine imposed on over-speeding as follows:

// 1.  No fine if the speed of the car ≤ 70 km/hour.
// 2.  Rs 500 fine if the speed of the car is strictly greater than 70 and less than 100.
// 3.  Rs 2000 fine if the speed of the car is strictly greater than 100.

// Determine the fine Chef needs to pay.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int speedOfChef;
        cout<<"Enter the speed of chef : ";
        cin>>speedOfChef;
        if(speedOfChef <= 70) cout<<"The fine Chef needs to pay will be : "<<0<<endl;
        else if(speedOfChef <= 100) cout<<"The fine Chef needs to pay will be : "<<500<<endl;
        else cout<<"The fine Chef needs to pay will be : "<<2000<<endl;
    }
}