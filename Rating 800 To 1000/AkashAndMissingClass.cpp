// Akash loves going to school, but not on weekends. A week consists of 7 days (Monday to Sunday). Akash takes a leave every Saturday. If a month consists of N days and the first-day of the month is Monday, find the number of days Akash would take a leave in the whole month.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfDays;

        cout<<"Enter the no. of days : ";
        cin>>noOfDays;

        if(noOfDays < 6) cout<<"The number of days Akash would take a leave in the whole month will be : 0"<<endl;

        else cout<<"The number of days Akash would take a leave in the whole month will be : "<<(((noOfDays - 6) / 7) + 1)<<endl;
    }
}