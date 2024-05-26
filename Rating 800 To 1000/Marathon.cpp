// Chefland is holding a virtual marathon for the categories 10 km, 21 km and 42 km having prizes A,B,C (A < B < C) respectively to promote physical fitness. In order to claim the prize in a particular category the person must cover the total distance for that category within D days. Also a single person cannot apply in multiple categories. Given the maximum distance d km that Chef can cover in a single day, find the maximum prize that Chef can win at the end of D days. If Chef can't win any prize, print 0.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfDays,noOfKM_RunCoverInSingleDay,prizeOfFirstCategory,prizeOfSecondCategory,prizeOfThirdCategory;

        cout<<"Enter the no. of days : ";
        cin>>noOfDays;

        cout<<"Enter the km Chef can cover in a single day : ";
        cin>>noOfKM_RunCoverInSingleDay;

        cout<<"Enter the prize for category of A : ";
        cin>>prizeOfFirstCategory;

        cout<<"Enter the prize for category of B : ";
        cin>>prizeOfSecondCategory;

        cout<<"Enter the prize for category of C : ";
        cin>>prizeOfThirdCategory;

        int totalDistanceCoverByChef = (noOfDays * noOfKM_RunCoverInSingleDay); 

        if(totalDistanceCoverByChef >= 42) cout<<"Prize chef got : "<<prizeOfThirdCategory<<endl;

        else if(totalDistanceCoverByChef >= 21) cout<<"Prize chef got : "<<prizeOfSecondCategory<<endl;

        else if(totalDistanceCoverByChef >= 10) cout<<"Prize chef got : "<<prizeOfFirstCategory<<endl;

        else cout<<"Prize chef got : "<<0<<endl;
    }
}