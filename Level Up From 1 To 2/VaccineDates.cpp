// Chef has taken his first dose of vaccine D days ago. He may take the second dose no less than L days and no more than R days since his first dose. Determine if Chef is too early, too late, or in the correct range for taking his second dose.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int firstDoseOfVaccine,startingDateOfSecondDose,endingDateOfSecondDose;
        cout<<"Enter the day no. of taking first dose : ";
        cin>>firstDoseOfVaccine;
        cout<<"Enter the starting date of second dose : ";
        cin>>startingDateOfSecondDose;
        cout<<"Enter the ending date of second dose : ";
        cin>>endingDateOfSecondDose;
        if(firstDoseOfVaccine >= startingDateOfSecondDose && firstDoseOfVaccine <= endingDateOfSecondDose) cout<<"Chef is in perfect timing"<<endl;
        else if(firstDoseOfVaccine >= startingDateOfSecondDose && firstDoseOfVaccine >= endingDateOfSecondDose) cout<<"Chef is too late"<<endl;
        else if(firstDoseOfVaccine < startingDateOfSecondDose && firstDoseOfVaccine <= endingDateOfSecondDose) cout<<"Chef is too early"<<endl;
    }
}