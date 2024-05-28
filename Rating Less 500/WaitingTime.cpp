// Chef is eagerly waiting for a piece of information. His secret agent told him that this information would be revealed to him after K weeks. X days have already passed and Chef is getting restless now. Find the number of remaining days Chef has to wait for, to get the information. It is guaranteed that the information has not been revealed to the Chef yet.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int reveledWeeks,noOfDaysPassed;
        cout<<"Enter the no. of weeks to get reveled : ";
        cin>>reveledWeeks;

        cout<<"Enter the no. of days passed already : ";
        cin>>noOfDaysPassed;

        cout<<"No. of remaining days Chef has to wait will be : "<<((7 * reveledWeeks) - noOfDaysPassed)<<endl;
    }
}