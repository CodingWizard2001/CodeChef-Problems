// A participant can make 1 submission every 30 seconds. If a contest lasts for X minutes, what is the maximum number of submissions that the participant can make during it?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int contestTime;
        cout<<"Enter the contest time : ";
        cin>>contestTime;
        cout<<"The maximum number of submissions that the participant can make during it will be : "<<(2 * contestTime)<<endl;
    }
}