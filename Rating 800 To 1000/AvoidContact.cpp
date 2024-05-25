// A hostel has N rooms in a straight line. It has to accommodate X people. Unfortunately, out of these X people, Y of them are infected with chickenpox. Due to safety norms, the following precaution must be taken: No person should occupy a room directly adjacent to a room occupied by a chickenpox-infected person. In particular, two chickenpox-infected people cannot occupy adjacent rooms. What's the minimum value of N for which all the people can be accommodated in the hostel, following the above condition?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPeople,roomNoOfAffectedPeople;
        cout<<"Enter the no. of people : ";
        cin>>noOfPeople;
        cout<<"Enter the affected people's room no : ";
        cin>>roomNoOfAffectedPeople;
        if((noOfPeople - roomNoOfAffectedPeople) == 0) cout<<"The minimum value where all the people can be accommodated in the hostel will be : "<<((roomNoOfAffectedPeople * 2 ) - 1)<<endl;
        else cout<<"The minimum value where all the people can be accommodated in the hostel will be : "<<((noOfPeople - roomNoOfAffectedPeople) + (roomNoOfAffectedPeople * 2))<<endl;
    }
}