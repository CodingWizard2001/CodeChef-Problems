// Chef has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int noOfCandies,noOfFriends;
        cout<<"Enter no. of candies : ";
        cin>>noOfCandies;
        cout<<"Enter no. of his friends : ";
        cin>>noOfFriends;
        if(noOfCandies % noOfFriends != 0) cout<<"No he can't give evenly candies to his friends"<<endl;
        else if((noOfCandies / noOfFriends) % 2 == 0) cout<<"Yes he can give evenly candies to his friends"<<endl;
        else cout<<"No he can't give evenly candies to his friends"<<endl;
    }
}