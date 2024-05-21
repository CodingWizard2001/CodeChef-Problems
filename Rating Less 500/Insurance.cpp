// Chef bought car insurance. The policy of the insurance is:

// 1.  The maximum rebatable amount for any damage is Rs X lakhs.
// 2.  If the amount required for repairing the damage is ≤ X lakhs, that amount is rebated in full.

// Chef's car meets an accident and required Rs Y lakhs for repairing. Determine the amount that will be rebated by the insurance company.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int repairingCost,insuranceCost;
        cout<<"Enter the repairing cost : ";
        cin>>repairingCost;
        cout<<"Enter the insurance cost is given by insurance company : ";
        cin>>insuranceCost;
        cout<<"The amount will be : "<<min(repairingCost,insuranceCost)<<" rebated by the insurance company"<<endl;
    }
}