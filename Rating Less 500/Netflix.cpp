// Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netflix allows only two users to share a subscription. Given that Alice, Bob, and Charlie have A,B, and C rupees respectively and a Netflix subscription costs X rupees, find whether any two of them can contribute to buy a subscription.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int rupeeAliceHave,rupeeBobHave,rupeeCharlieHave,subscriptionCost;
        cout<<"Enter the rupee alice have : ";
        cin>>rupeeAliceHave;
        cout<<"Enter the rupee Bob have : ";
        cin>>rupeeBobHave;
        cout<<"Enter the rupee charlie have : ";
        cin>>rupeeCharlieHave;
        cout<<"Enter the subscription cost : ";
        cin>>subscriptionCost;
        if((rupeeAliceHave + rupeeBobHave) >= subscriptionCost) cout<<"Any two of them can contribute to buy a subscription"<<endl;
        else if((rupeeAliceHave + rupeeCharlieHave) >= subscriptionCost) cout<<"Any two of them can contribute to buy a subscription"<<endl;
        else if((rupeeBobHave + rupeeCharlieHave) >= subscriptionCost) cout<<"Any two of them can contribute to buy a subscription"<<endl;
        else cout<<"No one can contribute to buy a subscription"<<endl; 
    }
}