// Chef has N friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his N friends. Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had M left shoes. What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his N friends?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int noOfFriends,leftShoes;
        cout<<"Enter no. of friends chief have : ";
        cin>>noOfFriends;
        cout<<"Enter no. of left shoes chief have : ";
        cin>>leftShoes;
        cout<<"The minimum number of extra shoes that Chef will have to buy are : "<<noOfFriends + max(0, noOfFriends - leftShoes)<<endl;
    }
}