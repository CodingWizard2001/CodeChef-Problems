// The mayor of your city has decided to throw a party to gather the favour of his people in different regions of the city. There are 3 distinct regions in the city namely A,B, C comprising of PA,PB and PC number of people respectively. However, the mayor knows that people of the region B are in conflict with people of regions A and C. So, there will be a conflict if people from region B are present at the party along with people from region A or C. The mayor wants to invite as many people as possible and also avoid any conflicts. Help him invite maximum number of people to the party.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPeopleInRegionA,noOfPeopleInRegionB,noOfPeopleInRegionC;
        cout<<"Enter the no. of people live in region A : ";
        cin>>noOfPeopleInRegionA;
        cout<<"Enter the no. of people live in region B : ";
        cin>>noOfPeopleInRegionB;
        cout<<"Enter the no. of people live in region C : ";
        cin>>noOfPeopleInRegionC;
        if((noOfPeopleInRegionA + noOfPeopleInRegionC) > noOfPeopleInRegionB) cout<<"Maximum number of people can attend to the party will be : "<<(noOfPeopleInRegionA + noOfPeopleInRegionC)<<endl;
        else cout<<"Maximum number of people can attend to the party will be : "<<(noOfPeopleInRegionB)<<endl;
    }
}