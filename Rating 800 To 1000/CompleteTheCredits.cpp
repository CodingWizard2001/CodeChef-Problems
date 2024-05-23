// In Uttu's college, a semester is said to be a:

// 1.  Overload semester if the number of credits taken > 65.
// 2.  Underload semester if the number of credits taken  < 35.
// 3.  Normal semester otherwise

// Given the number of credits X taken by Uttu, determine whether the semester is Overload, Underload or Normal.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int credit;
        cout<<"Enter the credit points : ";
        cin>>credit;
        if(credit > 65) cout<<"The semester is Overload"<<endl;
        else if(credit < 35) cout<<"The semester is Underload"<<endl;
        else cout<<"The semester is Normal"<<endl;
    }
}