// Chef and some of his friends are planning to participate in a puzzle hunt event. The rules of the puzzle hunt state: "This hunt is intended for teams of  6 to 8 people." Chef's team has N people in total. Are they eligible to participate?

#include <iostream>
using namespace std;
int main(){
    int noOfPlayers;
    cout<<"Enter the total no. of players are present : ";
    cin>>noOfPlayers;
    if(noOfPlayers >= 6 && noOfPlayers <= 8) cout<<"They are eligible"<<endl;
    else cout<<"They are not eligible"<<endl;
}