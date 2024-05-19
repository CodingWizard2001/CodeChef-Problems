// Chef is playing a mobile game. In the game, Chef's character Chefario can perform special attacks. However, one special attack costs X mana points to Chefario. If Chefario currently has Y mana points, determine the maximum number of special attacks he can perform.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int specialAttackCost,manaPoints;
        cout<<"Enter the cost of a special attack : ";
        cin>>specialAttackCost;
        cout<<"Enter the mana points chef have : ";
        cin>>manaPoints;
        if(manaPoints >= specialAttackCost) cout<<"The maximum number of special attacks he can perform will be : "<<(manaPoints / specialAttackCost)<<endl;
        else cout<<"The maximum number of special attacks he can perform will be : "<<0<<endl;
    }
}