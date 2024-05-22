// Chef has finally got the chance of his lifetime to drive in the F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not. Given the fastest finish time as X seconds and Chef's finish time as Y seconds, determine whether Chef will be allowed to race in the main event or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int timeTakeByFastestCar,timeTakenByChef;
        cout<<"Enter the time taken by fastest car : ";
        cin>>timeTakeByFastestCar;
        cout<<"Enter the time taken by chef : ";
        cin>>timeTakenByChef;
        int applying107Rule = (timeTakeByFastestCar * 107) / 100;
        if(applying107Rule >= timeTakenByChef) cout<<"Chef will be allowed to race in the main event"<<endl;
        else cout<<"Chef will not be allowed to race in the main event"<<endl;
    }
}