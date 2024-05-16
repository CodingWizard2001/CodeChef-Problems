// A single car can accommodate at most 4 people. N friends want to go to a restaurant for a party. Find the minimum number of cars required to accommodate all the friends.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int numberOfFriends;
        cout<<"Enter number of friends : ";
        cin>>numberOfFriends;
        if(numberOfFriends % 4 == 0) cout<<"CArs are required : "<<(numberOfFriends / 4)<<endl;
        else cout<<"CArs are required : "<<(numberOfFriends / 4) + 1<<endl;
    }
}