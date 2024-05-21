// Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.

#include <iostream>
using namespace std;
int main(){
    float accountBalance;
    int withdrawalAccount;
    cout<<"Enter the withdrawal transaction : ";
    cin>>withdrawalAccount;
    cout<<"Enter the account balance of pooja : ";
    cin>>accountBalance;
    if((withdrawalAccount % 5 == 0) && (withdrawalAccount + 0.5) <= accountBalance) cout<<"Pooja's account balance after an attempted transaction will be : "<<(accountBalance - withdrawalAccount - 0.50)<<endl;
    else cout<<"Pooja's account balance after an attempted transaction will be : "<<accountBalance<<endl;
}