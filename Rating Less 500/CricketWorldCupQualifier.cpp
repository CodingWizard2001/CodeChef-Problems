// The cricket World Cup has started in Chefland. There are many teams participating in the group stage matches. Any team that scores 12 or more points in the group stage matches qualifies for the next stage. You know the score that a particular team has scored in the group stage matches. Determine if the team has qualified for the next stage or not.


#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    if(number >= 12) cout<<"The team has qualified";
    else cout<<"The team has not qualified";
}