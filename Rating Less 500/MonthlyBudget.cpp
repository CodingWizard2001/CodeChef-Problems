// Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day. Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int totalCash,dailyExpenditure;
        cout<<"Enter the total money Akshat have : ";
        cin>>totalCash;
        cout<<"Enter the daily expenditure of Akshat : ";
        cin>>dailyExpenditure;
        if((dailyExpenditure * 30) <= totalCash) cout<<"Akshat has enough money to meet his daily expenditures for this month"<<endl;
        else cout<<"Akshat has not enough money to meet his daily expenditures for this month"<<endl;
    }
}