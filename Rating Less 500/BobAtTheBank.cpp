// Bob has an account in the Bobby Bank. His current account balance is W rupees. Each month, the office in which Bob works deposits a fixed amount of X rupees to his account. Y rupees is deducted from Bob's account each month as bank charges. Find his final account balance after Z months. Note that the account balance can be negative as well.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int bankBalance,fixedAmountDeposit,deductedAmountFromBank,totalMonth;
        cout<<"Enter the bank balance of Bob's account : ";
        cin>>bankBalance;
        cout<<"Enter the fixed amount Bob deposit in each month : ";
        cin>>fixedAmountDeposit;
        cout<<"Enter the deducted amount from Bob's account : ";
        cin>>deductedAmountFromBank;
        cout<<"Enter the total no. of month : ";
        cin>>totalMonth;
        cout<<"Bob's final account balance after "<<totalMonth<<" months will be : "<<(bankBalance + ((fixedAmountDeposit - deductedAmountFromBank) * totalMonth))<<endl;
    }
}