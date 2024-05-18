// In Chefland, everyone who earns strictly more than Y rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it. You have earned (X > Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int earnRupee,taxRupee;
        cout<<"Enter the amount of earn rupees : ";
        cin>>earnRupee;
        cout<<"Enter the amount of tax rupees : ";
        cin>>taxRupee;
        cout<<"The minimum amount of money have to invest : "<<(earnRupee - taxRupee)<<endl;
    }
}