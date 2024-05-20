// In the light of G-20 summit, government has decided to keep the average air quality index (AQI) strictly below 100. On some random day, Chef measures the AQI and found the value to be X. Find whether the government was able to keep the AQI within limits.

#include <iostream>
using namespace std;
int main(){
    int aqiIndex;
    cout<<"Enter the AQI index of the air : ";
    cin>>aqiIndex;
    if(aqiIndex < 100) cout<<"AQI are within limits"<<endl;
    else cout<<"AQI are not within limits"<<endl;
}