// A person is said to be sleep deprived if he slept strictly less than 7 hours in a day. Chef was only able to sleep X hours yesterday. Determine if he is sleep deprived or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int sleepTimeOfChef;
        cout<<"Enter the sleep time of chef : ";
        cin>>sleepTimeOfChef;
        if(sleepTimeOfChef < 7) cout<<"He is sleep deprived"<<endl;
        else cout<<"He is not sleep deprived"<<endl;
    }
}