// Chef recently started selling a special fruit. He has been selling the fruit for X rupees (X is a multiple of 100). He earns a profit of Y rupees on selling the fruit currently. Chef decided to increase the selling price by 10%. Please help him calculate his new profit after the increase in selling price.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int sellingFruit,profitIncome;
        cout<<"Enter the price at which he is selling fruit : ";
        cin>>sellingFruit;
        cout<<"Enter the profit he made : ";
        cin>>profitIncome;
        int newPrice = (sellingFruit + ((sellingFruit * 10) / 100));
        cout<<"His new profit after the increase in selling price will be : "<<(newPrice - (sellingFruit - profitIncome))<<endl;
    }
}