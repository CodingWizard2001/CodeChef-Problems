// Apple considers any iPhone with a battery health of  80% or above, to be in optimal condition. Given that your iPhone has X% battery health, find whether it is in optimal condition.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int batteryPercentage;
        cout<<"Enter the percentage of battery : ";
        cin>>batteryPercentage;
        if(batteryPercentage >= 80) cout<<"It is in optimal condition"<<endl;
        else cout<<"It is not in optimal condition"<<endl;
    }
}