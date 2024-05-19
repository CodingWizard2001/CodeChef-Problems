// Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all. Charlie measured the heights of Alice and Bob, and got to know that Alice's height is X centimeters and Bob's height is Y centimeters. Help Charlie decide who is taller.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int aliceHeight,bobHeight;
        cout<<"Enter the height of Alice : ";
        cin>>aliceHeight;
        cout<<"Enter the height of Bob : ";
        cin>>bobHeight;
        if(aliceHeight > bobHeight) cout<<"Alice is taller"<<endl;
        else cout<<"Bob is taller"<<endl;
    }
}