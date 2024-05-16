// Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).He was offered deals from two investors. The first investor offers A dollars for 10% of his company and the second investor offers B dollars for 20% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int shark1,shark2;
        cout<<"Enter first investor's offer : ";
        cin>>shark1;
        cout<<"Enter second investor's offer : ";
        cin>>shark2;
        int valuationOfShark1 = (shark1 / 10) * 100;
        int valuationOfShark2 = (shark1 / 20) * 100;
        if(valuationOfShark1 == valuationOfShark2) cout<<"Devendra can accept any offer"<<endl;
        else if(valuationOfShark1 > valuationOfShark2) cout<<"Devendra can accept first offer"<<endl;
        else cout<<"Devendra can accept second offer"<<endl;
    }
}