// In Chefland, precipitation is measured using a rain gauge in millimeter per hour. Chef categorizes rainfall as:

// 1.  LIGHT, if rainfall is less than 3 millimeter per hour.
// 2.  MODERATE, if rainfall is greater than equal to 3 millimeter per hour and less than 7 millimeter per hour.
// 3.  HEAVY if rainfall is greater than equal to 7 millimeter per hour.

// Given that it rains at X millimeter per hour on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int millimeterPerHour;
        cout<<"Enter the amount of rain raining per hour : ";
        cin>>millimeterPerHour;
        if(millimeterPerHour < 3) cout<<"Raining level : Light"<<endl;
        else if(millimeterPerHour >= 3 && millimeterPerHour < 7) cout<<"Raining level : Moderate"<<endl;
        else cout<<"Raining level : Heavy"<<endl;
    }
}