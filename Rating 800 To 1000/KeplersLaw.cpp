// Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. Kepler's 3rd law is The Law of Periods, according to which: The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit. You are given the Time periods (T1,T2) and Semimajor Axes (R1,R2) of two planets orbiting the same star. Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same. Print "Yes" (without quotes) if the law is satisfied, else print "No".



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int timePeriodOfFirstPlanet,timePeriodOfSecondPlanet,SemiMajorAxesOfFirstPlanet,SemiMajorAxesOfSecondPlanet;

        cout<<"Enter the time period of first planet to orbit the star : ";
        cin>>timePeriodOfFirstPlanet;

        cout<<"Enter the time period of second planet to orbit the star : ";
        cin>>timePeriodOfSecondPlanet;

        cout<<"Enter the semi major axes of first planet : ";
        cin>>SemiMajorAxesOfFirstPlanet;

        cout<<"Enter the semi major axes of second planet : ";
        cin>>SemiMajorAxesOfSecondPlanet;

        float lawOfPeriodsForFirstPlanet = (timePeriodOfFirstPlanet * timePeriodOfFirstPlanet) / float(SemiMajorAxesOfFirstPlanet * SemiMajorAxesOfFirstPlanet * SemiMajorAxesOfFirstPlanet);

        float lawOfPeriodsForSecondPlanet = (timePeriodOfSecondPlanet * timePeriodOfSecondPlanet) / float(SemiMajorAxesOfSecondPlanet * SemiMajorAxesOfSecondPlanet * SemiMajorAxesOfSecondPlanet);

        if(lawOfPeriodsForFirstPlanet == lawOfPeriodsForSecondPlanet) cout<<"Law of Periods is satisfied"<<endl;

        else cout<<"Law of Periods is not satisfied"<<endl;
    }
}