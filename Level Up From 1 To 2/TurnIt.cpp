// Chef is playing Need For Speed. Currently, his car is running on a straight road with a velocity U metres per second and approaching a 90 degree turn which is S metres away from him. To successfully cross the turn, velocity of the car when entering the turn must not exceed V metres per second. The brakes of Chef's car allow him to slow down with a deceleration (negative acceleration) not exceeding A metres per squared second. Tell him whether he can cross the turn successfully. The velocity v when entering the turn can be determined from Newton's 2nd law to be V ^ 2 = U ^ 2 + 2 ⋅ a ⋅ S if the car is moving with a uniform acceleration a.


#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int maximumVelocity,initialVelocity,acceleration,distanceCovered;

        cout<<"Enter the maximum velocity is allowed to successfully turn : ";
        cin>>maximumVelocity;

        cout<<"Enter the initial velocity is allowed to successfully turn : ";
        cin>>initialVelocity;

        cout<<"Enter the acceleration of car : ";
        cin>>acceleration;

        cout<<"Enter the distance covered : ";
        cin>>distanceCovered;

        float currentVelocity = sqrt((initialVelocity * initialVelocity) - (2 * acceleration * distanceCovered));

        if(currentVelocity > maximumVelocity) cout<<"He can't turn successfully"<<endl;
        else cout<<"He can turn successfully"<<endl;
    }
}