// Chef is very hungry. So, Chef goes to a shop selling burgers. The shop has 2 types of burgers:

// 1.  Normal burgers, which cost X rupees each
// 2.  Premium burgers, which cost Y rupees each (where Y > X)

// Chef has R rupees. Chef wants to buy exactly N burgers. He also wants to maximize the number of premium burgers he buys. Determine the number of burgers of both types Chef must buy. Output -1 if it is not possible for Chef to buy N burgers.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int costOfNormal,costOfPremium,noOfBurgerWantToBuy,moneyChefHave;

        // cout<<"Enter the cost of normal burger : ";
        cin>>costOfNormal;

        // cout<<"Enter the cost of premium burger : ";
        cin>>costOfPremium;

        // cout<<"Enter the no. of burger he wants to buy : ";
        cin>>noOfBurgerWantToBuy;

        // cout<<"Enter the money Chef have : ";
        cin>>moneyChefHave;

        if((noOfBurgerWantToBuy * costOfNormal) > moneyChefHave) cout<<-1<<endl;

        else{
            int premiumCanHeBuy = (moneyChefHave - costOfNormal * noOfBurgerWantToBuy) / (costOfPremium - costOfNormal);

            if(premiumCanHeBuy >= noOfBurgerWantToBuy) cout<<0<<" "<<noOfBurgerWantToBuy<<endl;

            else cout<<(noOfBurgerWantToBuy - premiumCanHeBuy)<<" "<<premiumCanHeBuy<<endl;
        }
    }
}