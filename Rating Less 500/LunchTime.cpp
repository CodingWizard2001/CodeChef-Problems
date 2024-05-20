// Chef has his lunch only between 1 pm and 4 pm (both inclusive). Given that the current time is X pm, find out whether it is lunchtime for Chef.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lunchTime;
        cout<<"Enter the time : ";
        cin>>lunchTime;
        if(lunchTime >= 1 && lunchTime <= 4) cout<<"It is lunchtime for Chef"<<endl;
        else cout<<"It is not lunchtime for Chef"<<endl;
    }
}