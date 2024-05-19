// Alice, Bob and Charlie are bidding for an artifact at an auction. Alice bids A rupees, Bob bids B rupees, and Charlie bids C rupees (where A, B, and C are distinct). According to the rules of the auction, the person who bids the highest amount will win the auction. Determine who will win the auction.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int bidOfAlice,bidOfBob,bidOfCharlie;
        cout<<"Enter the amount of bid Alice rise : ";
        cin>>bidOfAlice;
        cout<<"Enter the amount of bid Bob rise : ";
        cin>>bidOfBob;
        cout<<"Enter the amount of bid Charlie rise : ";
        cin>>bidOfCharlie;
        if(bidOfAlice > bidOfBob && bidOfAlice > bidOfCharlie) cout<<"Alice will win the auction"<<endl;
        else if(bidOfBob > bidOfAlice && bidOfBob > bidOfCharlie) cout<<"Bob will win the auction"<<endl;
        else cout<<"Charlie will win the auction"<<endl;
    }
}