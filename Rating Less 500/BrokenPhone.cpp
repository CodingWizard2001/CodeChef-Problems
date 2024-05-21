// Uttu broke his phone. He can get it repaired by spending X rupees or he can buy a new phone by spending Y rupees. Uttu wants to spend as little money as possible. Find out if it is better to get the phone repaired or to buy a new phone.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int costOfRepair,costOfNewPhone;
        cout<<"Enter the cost of repair : ";
        cin>>costOfRepair;
        cout<<"Enter the cost of new phone : ";
        cin>>costOfNewPhone;
        if(costOfRepair == costOfNewPhone) cout<<"He can choose either repair or new phone as in both cases price is same"<<endl;
        else if(costOfRepair < costOfNewPhone) cout<<"He should repair his phone"<<endl;
        else cout<<"He should buy new phone"<<endl;
    }
}