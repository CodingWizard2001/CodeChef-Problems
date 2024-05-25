// Chef's phone has a battery level of N percent. Each minute:

// 1.  If the phone is on charging, the battery level increases by 2%.
// 2.  Otherwise, the battery level decreases by 3%.

// Find the minimum time in which Chef can make the battery level reach exactly 50%.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int batteryLevel;
        cout<<"Enter the current battery level : ";
        cin>>batteryLevel;
        int count = 0;
        while(batteryLevel != 50){
            if(batteryLevel > 50) batteryLevel -= 3;
            else batteryLevel += 2;
            count++;
        }
        cout<<"The minimum time in which Chef can make the battery level reach exactly 50% will be : "<<count<<endl;
    }
}