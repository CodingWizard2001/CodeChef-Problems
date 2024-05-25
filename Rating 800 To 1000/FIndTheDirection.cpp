// Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction. Find the direction in which Chef is facing after exactly X seconds.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfSeconds;
        cout<<"Enter the no. of seconds passed : ";
        cin>>noOfSeconds;
        if((noOfSeconds % 4) == 0) cout<<"Direction will be : North"<<endl;
        else if((noOfSeconds % 4) == 1) cout<<"Direction will be : East"<<endl;
        else if((noOfSeconds % 4) == 2) cout<<"Direction will be : South"<<endl;
        else cout<<"Direction will be : West"<<endl;
    }
}