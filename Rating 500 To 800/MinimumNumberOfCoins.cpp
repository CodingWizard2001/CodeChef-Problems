// Chef has infinite coins in denominations of rupees 5 and rupees 10. Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print -1.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int purchaseRupee;
        cout<<"Enter the price : ";
        cin>>purchaseRupee;
        if(purchaseRupee % 5 != 0) cout<<"Minimum coins are required : "<<"-1"<<endl;
        else cout<<"Minimum coins are required : "<<(purchaseRupee / 10) + ((purchaseRupee % 10) / 5)<<endl;
    }
}