// A city has been infected by a contagious virus. In a survey, it was found that A out of the N people living in the city are currently infected. It has been observed that the only way for a person to get infected is if he comes in contact with an already infected person, and both of them are NOT wearing a mask. The mayor of the city wants to make a new Mask Policy and find out the minimum number of people that will be required to wear a mask to avoid the further spread of the virus. Help the mayor in finding this number.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int totalNoOfPeople,infectedPerson;
        // cout<<"Enter the total no. of people : ";
        cin>>totalNoOfPeople;
        // cout<<"Enter the no. of infected people : ";
        cin>>infectedPerson;

        // cout<<"The minimum number of people that will be required to wear a mask to avoid the further spread of the virus will be : ";
        cout<<min(infectedPerson,(totalNoOfPeople - infectedPerson))<<endl;
    }
}