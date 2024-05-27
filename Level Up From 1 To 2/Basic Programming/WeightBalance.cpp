// No play and eating all day makes your belly fat. This happened to Chef during the lockdown. His weight before the lockdown was w1 kg (measured on the most accurate hospital machine) and after M months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), he got the result that his weight was w2 kg (w2 > w1). Scientific research in all growing kids shows that their weights increase by a value between x1 and x2 kg (inclusive) per month, but not necessarily the same value each month. Chef assumes that he is a growing kid. Tell him whether his home scale could be giving correct results.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int weightBeforeLockDown,weightAfterLockDown,
        minWeightChange,maxWeightChange,noOfMonths;

        cout<<"Enter the weight before lockdown : ";
        cin>>weightBeforeLockDown;

        cout<<"Enter the weight after lockdown : ";
        cin>>weightAfterLockDown;

        cout<<"Enter the minimum weight change in 1 month : ";
        cin>>minWeightChange;

        cout<<"Enter the maximum weight change in 1 month : ";
        cin>>maxWeightChange;

        cout<<"Enter the no. of months spend in lockdown : ";
        cin>>noOfMonths;

        int weightDifference = (weightAfterLockDown - weightBeforeLockDown);

        if((minWeightChange * noOfMonths) <= weightDifference && weightDifference <= (maxWeightChange * noOfMonths)) cout<<"He is a growing kid"<<endl;

        else cout<<"He is not a growing kid"<<endl;
    }
}