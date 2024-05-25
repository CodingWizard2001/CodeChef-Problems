// Utkarsh is currently sitting for placements. He has applied to three companies named A,B, and C. You know Utkarsh's order of preference among these 3 companies, given to you as characters first, second, and third respectively (where first is the company he prefers most). You also know that Utkarsh has received offers from exactly two of these three companies, given you as characters x and y. Utkarsh will always accept the offer from whichever company is highest on his preference list. Which company will he join?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        char firstPreference,secondPreference,thirdPreference;
        cout<<"Enter the first preference company : ";
        cin>>firstPreference;
        cout<<"Enter the second preference company : ";
        cin>>secondPreference;
        cout<<"Enter the third preference company : ";
        cin>>thirdPreference;
        char firstOffer,secondOffer;
        cout<<"Enter the first offer received from company : ";
        cin>>firstOffer;
        cout<<"Enter the second offer received from company : ";
        cin>>secondOffer;
        if(firstPreference == firstOffer || firstPreference == secondOffer) cout<<"He will join Company : "<<firstPreference<<endl;
        else if(secondPreference == firstOffer || secondPreference == secondOffer) cout<<"He will join Company : "<<secondPreference<<endl;
        else cout<<"He will join Company : "<<thirdPreference<<endl;
    }
}