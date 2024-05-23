// Chef will have N guests in his house today. He wants to serve at least one dish to each of the N guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has A fruits, B vegetables, and C fishes in his house. Can he prepare at least N dishes in total?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfGuest,noOfFruits,noOfVegetables,noOfFishes;
        cout<<"Enter the no. of guests are present : ";
        cin>>noOfGuest;
        cout<<"Enter the no. of fruits are available : ";
        cin>>noOfFruits;
        cout<<"Enter the no. of vegetables are available : ";
        cin>>noOfVegetables;
        cout<<"Enter the no. of fishes are available : ";
        cin>>noOfFishes;
        int totalNoOfDishes = 0;
        while(noOfVegetables > 0){
            if(noOfFishes > 0){
                noOfVegetables--;
                noOfFishes--;
                totalNoOfDishes++;
            }
            else if(noOfFruits > 0){
                noOfVegetables--;
                noOfFruits--;
                totalNoOfDishes++;
            }
            else break;
        }
        if(totalNoOfDishes >= noOfGuest) cout<<"He can prepare atleast "<<noOfGuest<<" dishes"<<endl;
        else  cout<<"He can't prepare atleast "<<noOfGuest<<" dishes"<<endl;
    }
}