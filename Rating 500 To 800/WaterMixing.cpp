// Chef is setting up a perfect bath for himself. He has X litres of hot water and Y litres of cold water. The initial temperature of water in his bathtub is A degrees. On mixing water, the temperature of the bathtub changes as following:

// 1. The temperature rises by 1 degree on mixing 1 litre of hot water.
// 2. The temperature drops by 1 degree on mixing 1 litre of cold water.

// Determine whether he can set the temperature to B degrees for a perfect bath.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int temperatureOfBathtub,requiredTemperature,hotTemperature,coldTemperature;
        cout<<"Enter of temperature in bathtub : ";
        cin>>temperatureOfBathtub;
        cout<<"Enter the required temperature in bathtub : ";
        cin>>requiredTemperature;
        cout<<"Enter the amount of hot water he have : ";
        cin>>hotTemperature;
        cout<<"Enter the amount of cold water he have : ";
        cin>>coldTemperature;
        int miss = abs(requiredTemperature - temperatureOfBathtub);
        if(requiredTemperature > temperatureOfBathtub){
            if(miss <= hotTemperature) cout<<"He can set the temperature of the bathtub as required"<<endl;
            else cout<<"He can't set the temperature of the bathtub as required"<<endl;
        }
        else{
            if(miss <= coldTemperature) cout<<"He can set the temperature of the bathtub as required"<<endl;
            else cout<<"He can't set the temperature of the bathtub as required"<<endl;
        }
    }
}