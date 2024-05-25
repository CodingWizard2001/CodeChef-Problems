// In Chefland, the speed of light is c m/s, and acceleration due to gravity is g m/s^2. Find the smallest height (in meters) from which Chef should jump such that during his journey down only under the effect of gravity and independent of any air resistance, he achieves the speed of light and verifies Einstein's theory of special relativity. Assume he jumps at zero velocity and at any time, his velocity (v) and depth of descent (H) are related as v^2 = 2 ⋅ g ⋅ H.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int accelerationDueToGravity,speedOfLight;
        cout<<"Enter the acceleration due to gravity : ";
        cin>>accelerationDueToGravity;
        cout<<"Enter the speed light : ";
        cin>>speedOfLight;
        cout<<"Minimum required height : "<<((speedOfLight * speedOfLight) / (2 * accelerationDueToGravity))<<endl;
    }
}