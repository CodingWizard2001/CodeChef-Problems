// Mr. Chef is the manager of the Code cinemas and after a long break, the theatres are now open to the public again. To compensate for the loss in revenue due to Covid-19, Mr. Chef wants to maximize the profits for every show from now on and at the same time follow the guidelines set the by government. The guidelines are:

// 1.  If two people are seated in the same row, there must be at least one empty seat between them.
// 2.  If two people are seated in different rows, there must be at least one completely empty row between them. That is, if there are people seated in rows i and j where  i<j, there must be some row k such that i < k < j and nobody is seated in row k.

// Given the information about the number of rows and the number of seats in each row, find the maximum number of tickets Mr. Chef can sell.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfRows,noOfTickets;
        cin>>noOfRows>>noOfTickets;
        cout<<((noOfRows + 1) / 2) * ((noOfTickets + 1) / 2)<<endl;
    }
}