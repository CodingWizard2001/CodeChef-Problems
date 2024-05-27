// You are given two integers N and K. You may perform the following operation any number of times (including zero): change N to N - K, i.e. subtract K from N. Find the smallest non-negative integer value of N you can obtain this way.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfN,valueOfK;

        cout<<"Enter the value of N : ";
        cin>>valueOfN;

        cout<<"Enter the value of K : ";
        cin>>valueOfK;

        if(valueOfK == 0) cout<<"The smallest non-negative integer value will be : "<<valueOfN<<endl;

        else cout<<"The smallest non-negative integer value will be : "<<(valueOfN % valueOfK)<<endl;
    }
}