// A certain type of steel is graded according to the following conditions.

// 1.  Hardness of the steel must be greater than 50
// 2.  Carbon content of the steel must be less than 0.7
// 3.  Tensile strength must be greater than 5600

// The grades awarded are as follows:
// 1.  Grade is 10 if all three conditions are met
// 2.  Grade is 9 if conditions (1) and (2) are met
// 3.  Grade is 8 if conditions (2) and (3) are met
// 4.  Grade is 7 if conditions (1) and (3) are met
// 5.  Grade is 6 if only one condition is met
// 6.  Grade is 5 if none of the three conditions are met

// Write a program to display the grade of the steel, based on the values of hardness, carbon content and tensile strength of the steel, given by the user.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int hardnessOfSteel,tensileStrengthOfSteel;
        float carbonContentOfSteel;
        cout<<"Enter the hardness of steel : ";
        cin>>hardnessOfSteel;
        cout<<"Enter the carbon content present in steel : ";
        cin>>carbonContentOfSteel;
        cout<<"Enter the tensile strength of steel : ";
        cin>>tensileStrengthOfSteel;
        if(hardnessOfSteel > 50 && carbonContentOfSteel < 0.7 && tensileStrengthOfSteel > 5600) cout<<"Grade of steel : 10"<<endl;
        else if(hardnessOfSteel > 50 && carbonContentOfSteel < 0.7) cout<<"Grade of steel : 9"<<endl;
        else if(carbonContentOfSteel < 0.7 && tensileStrengthOfSteel > 5600) cout<<"Grade of steel : 8"<<endl;
        else if(hardnessOfSteel > 50 && tensileStrengthOfSteel > 5600) cout<<"Grade of steel : 7"<<endl;
        else  if(hardnessOfSteel > 50 || carbonContentOfSteel < 0.7 || tensileStrengthOfSteel > 5600) cout<<"Grade of steel : 6"<<endl;
        else cout<<"Grade of steel : 5"<<endl;
    }
}