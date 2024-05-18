// DAIICT college students want to attend an IPL match. A total of N students from the college want to go while only M tickets are available for the match. Determine how many students won't be able to book tickets.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudents,noOfTickets;
        cout<<"Enter the no. of students : ";
        cin>>noOfStudents;
        cout<<"Enter the no. of tickets available : ";
        cin>>noOfTickets;
        if(noOfStudents > noOfTickets) cout<<"No. of students won't be able to book tickets are : "<<(noOfStudents - noOfTickets)<<endl;
        else cout<<"Students won't be able to book tickets are : "<<0<<endl;
    }
}