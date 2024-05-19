// Chef had collected N notes of Rs. 2000 to pay his total college fees. However, the government banned Rs. 2000 notes. Chef wants to pay the same amount using Rs. 500 notes only. Find the number of notes Chef needs.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int notes2000;
        cout<<"Enter the 2000 note chef have : ";
        cin>>notes2000;
        cout<<"The number of notes Chef needs will be : "<<(notes2000 * 2000) / 500<<endl;
    }
}