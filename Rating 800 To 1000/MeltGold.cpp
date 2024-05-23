// Chef has an ore with melting point of X degrees. Chef's kiln has a initial temperature of Y degrees. The temperature of the kiln increases by i degrees after the ith minute. Find the minimum time in minutes after which the ore starts melting.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int meltingPoint,initialTemperature;
        cout<<"Enter the melting point of Ore : ";
        cin>>meltingPoint;
        cout<<"Enter the initial temperature : ";
        cin>>initialTemperature;
        int minimumTime = 0;
        while(meltingPoint > initialTemperature){
            minimumTime++;
            initialTemperature += minimumTime;
        }
        cout<<"The minimum time will be required : "<<minimumTime<<endl;
    }
}