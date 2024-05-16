// Chef received N candies on his birthday. He wants to put these candies in some bags. A bag has K pockets and each pocket can hold at most M candies. Find the minimum number of bags Chef needs so that he can put every candy into a bag.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int receivedCandies,noOfPockets,holdCandies;
        cout<<"Enter no. of receive candies : ";
        cin>>receivedCandies;
        cout<<"Enter no. of pockets in the bag : ";
        cin>>noOfPockets;
        cout<<"Enter no. of candies pocket can hold : ";
        cin>>holdCandies;
        if(receivedCandies % (noOfPockets * holdCandies) == 0) cout<<"No. of bags are required : "<<(receivedCandies / (noOfPockets * holdCandies))<<endl;
        else cout<<"No. of bags are required : "<<(receivedCandies / (noOfPockets * holdCandies)) + 1<<endl;
    }
}