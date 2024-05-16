// In a coding contest, there are two types of problems:

// 1. Easy problems, which are worth 1 point each
// 2. Hard problems, which are worth 2 points each

// To qualify for the next round, a contestant must score at least X points. Chef solved A Easy problems and B Hard problems. Will Chef qualify or not?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int passingScore,easyQuestion,hardQuestion;
        cout<<"Enter the passing score : ";
        cin>>passingScore;
        cout<<"Enter the no. of easy question are done : ";
        cin>>easyQuestion;
        cout<<"Enter the no. of hard question are done : ";
        cin>>hardQuestion;
        if(((easyQuestion * 1 + hardQuestion * 2) >= passingScore)) cout<<"Chef will pass"<<endl;
        else cout<<"Chef will not pass"<<endl;
    }
}