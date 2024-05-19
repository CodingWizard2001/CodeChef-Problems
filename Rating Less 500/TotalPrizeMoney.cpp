// In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

// 1.  Top 10 participants receive rupees X each.
// 2.  Participants with rank 11 to 100 (both inclusive) receive rupees Y each.

// Find the total prize money over all the contestants.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int prizeOfFirst10,restOfPrize11To100;
        cout<<"Enter the prize money first 10 participants : ";
        cin>>prizeOfFirst10;
        cout<<"Enter the prize money of 11 to 100 participants : ";
        cin>>restOfPrize11To100;
        cout<<"The total prize money over all the contestants are : "<<(10 * prizeOfFirst10) + (restOfPrize11To100 * 90)<<endl;
    }
}