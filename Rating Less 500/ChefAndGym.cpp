// Chef has decided to join a Gym in ChefLand and if possible, also hire a personal trainer at the gym. The monthly cost of the gym is X and personal training will cost him an additional Y per month. Chef's total budget per month is only Z. Print 1 if Chef can only join the gym, 2 if he can also have a personal trainer, and 0 if he can't even join the gym.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int monthlyCost,trainerCost,budget;
        cout<<"Enter the monthly training cost of Chef : ";
        cin>>monthlyCost;
        cout<<"Enter the monthly trainer cost of Chef : ";
        cin>>trainerCost;
        cout<<"Enter the budget of Chef : ";
        cin>>budget;
        if((monthlyCost + trainerCost) <= budget) cout<<"He can join Gym and also have a trainer"<<endl;
        else if(monthlyCost < budget) cout<<"He can only join Gym"<<endl;
        else cout<<"He can't join Gym neither have a trainer"<<endl;
    }
}