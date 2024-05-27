// Chef has three spells. Their powers are A, B, and C respectively. Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P. Before going to sleep, Chef wants to use exactly two spells out of these three. Find the maximum number of hit points Chef can have after using the spells.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int powerOfSpellA,powerOfSpellB,powerOfSpellC;
        
        cout<<"Enter the power spell A : ";
        cin>>powerOfSpellA;
        
        cout<<"Enter the power spell B : ";
        cin>>powerOfSpellB;
        
        cout<<"Enter the power spell C : ";
        cin>>powerOfSpellC;

        cout<<"The maximum number of hit points Chef can have after using the spells will be : "<<(powerOfSpellA + powerOfSpellB + powerOfSpellC) - min(powerOfSpellA,min(powerOfSpellB,powerOfSpellC))<<endl;
    }
}