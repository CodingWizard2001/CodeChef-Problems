// Chef's dog binary hears frequencies starting from 67 Hertz to 45000 Hertz (both inclusive). If Chef's commands have a frequency of X Hertz, find whether binary can hear them or not.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int frequencies;
        cout<<"Enter the frequencies of the sound : ";
        cin>>frequencies;
        if(frequencies >= 67 && frequencies <= 45000) cout<<"Binary can hear them"<<endl;
        else cout<<"Binary can't hear them"<<endl;
    }
}