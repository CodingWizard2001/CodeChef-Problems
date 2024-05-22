// Chef is the financial in-charge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market. There are exactly 3 companies in the market each of whose revenues are denoted by R1, R2 and R3 respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors. Given the revenue of the 3 companies, help Chef determine if any of them has a monopolistic advantage.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int revenueOfFirstCompany,revenueOfSecondCompany,revenueOfThirdCompany;
        cout<<"Enter revenue earn by first company : ";
        cin>>revenueOfFirstCompany;
        cout<<"Enter revenue earn by second company : ";
        cin>>revenueOfSecondCompany;
        cout<<"Enter revenue earn by third company : ";
        cin>>revenueOfThirdCompany;
        int max = 0;
        if(revenueOfFirstCompany > revenueOfSecondCompany && revenueOfFirstCompany > revenueOfThirdCompany) max = revenueOfFirstCompany;
        else if(revenueOfSecondCompany > revenueOfFirstCompany && revenueOfSecondCompany > revenueOfThirdCompany) max = revenueOfSecondCompany;
        else max = revenueOfThirdCompany;
        if((revenueOfFirstCompany + revenueOfSecondCompany + revenueOfThirdCompany) - max < max) cout<<"Market has a monopolistic advantage"<<endl;
        else cout<<"Market has not a monopolistic advantage"<<endl;
    }
}