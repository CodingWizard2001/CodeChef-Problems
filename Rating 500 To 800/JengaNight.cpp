// Chef hosts a party for his birthday. There are N people at the party. All these people decide to play Jenga. There are X Jenga tiles available. In one round, all the players pick 1 tile each and place it in the tower. The game is valid if:

// 1. All the players have a tile in each round;
// 2. All the tiles are used at the end.

// Given N and X, find whether the game is valid.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int noOfPeople,noOfTiles;
        cout<<"Enter the no. of people : ";
        cin>>noOfPeople;
        cout<<"Enter the no. of tiles : ";
        cin>>noOfTiles;
        if(noOfTiles % noOfPeople == 0) cout<<"Yes it's valid"<<endl;
        else cout<<"No it's not valid"<<endl;
    }
}