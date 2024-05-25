// Chef recently realized that he needs a haircut, and went to his favorite hair salon. At the salon, he found N customers waiting for their haircuts. From his past experience, Chef knows that the salon takes M minutes per customer. Only one person can get their haircut at a time. For how many minutes will Chef have to wait before he can get his haircut?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPeopleBeforeChef,timeTakePerCustomer;
        cout<<"Enter the no. of peoples are waiting before Chef : ";
        cin>>noOfPeopleBeforeChef;
        cout<<"Enter the amount of time take for a hair cut : ";
        cin>>timeTakePerCustomer;
        cout<<"Chef have to wait : "<<(noOfPeopleBeforeChef * timeTakePerCustomer)<<endl;
    }
}