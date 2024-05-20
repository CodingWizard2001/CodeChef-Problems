// Chef wants to give a burger party to all his N friends i.e. he wants to buy one burger for each of his friends. The cost of each burger is X rupees while Chef has a total of K rupees. Determine whether he has enough money to buy a burger for each of his friends or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfFriends,costOfBurger,totalRupee;
        cout<<"Enter the no. of friends : ";
        cin>>noOfFriends;
        cout<<"Enter the cost of burger : ";
        cin>>costOfBurger;
        cout<<"Enter the total rupee chef have : ";
        cin>>totalRupee;
        if((noOfFriends * costOfBurger) <= totalRupee) cout<<"He has enough money to buy a burger for each of his friends"<<endl;
        else cout<<"He has not enough money to buy a burger for each of his friends"<<endl;
    }
}