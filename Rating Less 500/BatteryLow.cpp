// Chef's phone shows a Battery Low notification if the battery level is 15% or less. Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int batteryLevel;
        cout<<"Enter battery level of Chef's phone : ";
        cin>>batteryLevel;
        if(batteryLevel <= 15) cout<<"It would show a Battery low notification"<<endl;
        else cout<<"It would not show a Battery low notification"<<endl;
    }
}