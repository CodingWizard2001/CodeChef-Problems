// In the medieval age, there were 3 kingdoms A, B, and C. The army of these kingdom had NA, NB and NC soldiers respectively. You are given that an army with X soldiers can defeat an army with Y soldiers only if X > Y. An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom C's army will be dominant only if NC > NA + NB. Determine whether any of the armies is dominant or not.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int armyPowerOfKingdomA,armyPowerOfKingdomB,armyPowerOfKingdomC;
        cout<<"Enter the army power of kingdom A : ";
        cin>>armyPowerOfKingdomA;
        cout<<"Enter the army power of kingdom B : ";
        cin>>armyPowerOfKingdomB;
        cout<<"Enter the army power of kingdom C : ";
        cin>>armyPowerOfKingdomC;
        int max = 0;
        if(armyPowerOfKingdomA > armyPowerOfKingdomB && armyPowerOfKingdomA > armyPowerOfKingdomC) max = armyPowerOfKingdomA;
        else if(armyPowerOfKingdomB > armyPowerOfKingdomA && armyPowerOfKingdomB > armyPowerOfKingdomC) max = armyPowerOfKingdomB;
        else max = armyPowerOfKingdomC;

        if((armyPowerOfKingdomA + armyPowerOfKingdomB + armyPowerOfKingdomC) - max < max) cout<<"Armies is dominant"<<endl;
        else cout<<"No armies is dominant"<<endl;
    }
}