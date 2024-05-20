// Chef has to travel to another place. For this, he can avail any one of two cab services. The first cab service charges X rupees. The second cab service charges Y rupees. Chef wants to spend the minimum amount of money. Which cab service should Chef take?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int serviceOfFirstCab,serviceOfSecondCab;
        cout<<"Enter the charge of first cab : ";
        cin>>serviceOfFirstCab;
        cout<<"Enter the charge of second cab : ";
        cin>>serviceOfSecondCab;
        if(serviceOfFirstCab == serviceOfSecondCab) cout<<"Chef take any cab"<<endl;
        else if(serviceOfFirstCab > serviceOfSecondCab) cout<<"Chef will take second cab"<<endl;
        else cout<<"Chef will take first cab"<<endl;
    }
}