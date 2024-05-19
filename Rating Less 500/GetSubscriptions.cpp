// Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes. The meeting platform supports a meeting of maximum 30 minutes without subscription and a meeting of unlimited duration with subscription. Determine whether Chef needs to take a subscription or not for setting up the meet.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lectureTime;
        cout<<"Enter the lecture minute : ";
        cin>>lectureTime;
        if(lectureTime > 30) cout<<"Chef needs to take a subscription"<<endl;
        else cout<<"Chef doesn't needs to take a subscription"<<endl;
    }
}