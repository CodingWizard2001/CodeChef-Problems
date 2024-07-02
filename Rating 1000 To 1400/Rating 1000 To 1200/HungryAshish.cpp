// It's dinner time. Ashish is very hungry and wants to eat something. He has X rupees in his pocket. Since Ashish is very picky, he only likes to eat either PIZZA or BURGER. In addition, he prefers eating PIZZA over eating BURGER. The cost of a PIZZA is Y rupees while the cost of a BURGER is Z rupees. Ashish can eat at most one thing. Find out what will Ashish eat for his dinner.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int moneyLeft,prizeOfPizza,prizeOfBurger;
        // cout<<"Enter the money left in pocket : ";
        cin>>moneyLeft;
        // cout<<"Enter the prize of Pizza : ";
        cin>>prizeOfPizza;
        // cout<<"Enter the prize of Burger : ";
        cin>>prizeOfBurger;
        
        if(prizeOfPizza <= moneyLeft) cout<<"PIZZA"<<endl;
        
        else if(prizeOfBurger <= moneyLeft) cout<<"BURGER"<<endl;

        else if(prizeOfPizza > moneyLeft && prizeOfBurger > moneyLeft) cout<<"NOTHING"<<endl;
    }
}