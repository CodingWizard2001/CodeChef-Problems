// After a very long time, the Chef has a vacation. Chef has planned for two trips during this vacation - one with his family and the other with his friends. The family trip will take X days and the trip with friends will take Y days. Currently, the dates are not decided but the vacation will last only for Z days. Chef can be in at most one trip at any time and once a trip is started, Chef must complete it before the vacation ends. Will Chef be able to go on both these trips if he chooses the dates optimally?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfDaysInFamilyTrip,noOfDaysInFriendTrip,noOfVacationDay;
        cout<<"Enter the no. of days spent in family trip : ";
        cin>>noOfDaysInFamilyTrip;
        cout<<"Enter the no. of days spent in friend trip : ";
        cin>>noOfDaysInFriendTrip;
        cout<<"Enter the no. of vacation days : ";
        cin>>noOfVacationDay;
        if((noOfDaysInFamilyTrip + noOfDaysInFriendTrip) <= noOfVacationDay) cout<<"He can go both trip"<<endl;
        else cout<<"He can't go both trip"<<endl;
    }
}