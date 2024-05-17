// Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special. Chef has a total of X rupees and one chocolate costs Y rupees. What is the maximum number of chocolates Chef can buy?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int chefRupeeHave,chocolateOfRupee;
        cout<<"Enter the rupee chef have : ";
        cin>>chefRupeeHave;
        cout<<"Enter the cost of chocolate : ";
        cin>>chocolateOfRupee;
        if(chefRupeeHave < chocolateOfRupee) cout<<"Chef can buy : "<<0<<" chocolate"<<endl;
        else cout<<"Chef can buy : "<<(chefRupeeHave / chocolateOfRupee)<<" chocolate"<<endl;
    }
}