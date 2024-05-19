// Chef is eagerly waiting for a piece of information. His secret agent told him that this information would be revealed to him after K weeks. X days have already passed and Chef is getting restless now. Find the number of remaining days Chef has to wait for, to get the information. It is guaranteed that the information has not been revealed to the Chef yet.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int weeksChefHave,passedDays;
        cout<<"Enter the no. of weeks chef have : ";
        cin>>weeksChefHave;
        cout<<"Enter the no. of days chef already passed : ";
        cin>>passedDays;
        cout<<"The number of remaining days Chef has to wait will be : "<<((weeksChefHave * 7) - passedDays)<<endl;
    }
}