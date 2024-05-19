// In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food. Jerry is running at a speed of X metres per second while Tom is chasing him at a speed of Y metres per second. Determine whether Tom will be able to catch Jerry.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int speedOfJerry,speedOfTom;
        cout<<"Enter the speed of Jerry : ";
        cin>>speedOfJerry;
        cout<<"Enter the speed of Tom : ";
        cin>>speedOfTom;
        if(speedOfJerry < speedOfTom) cout<<"Tom will be able to catch Jerry"<<endl;
        else cout<<"Tom will not be able to catch Jerry"<<endl;
    }
}