// Chef considers the climate HOT if the temperature is above 20, otherwise he considers it COLD. You are given the temperature C, find whether the climate is HOT or COLD.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int temperatureOfWeather;
        cout<<"Enter the temperature of weather : ";
        cin>>temperatureOfWeather;
        if(temperatureOfWeather > 20) cout<<"Weather is HOT"<<endl;
        else cout<<"Weather is COLD"<<endl;
    }
}