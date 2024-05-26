// N candidates (numbered from 1 to N) join Chef's firm. The first 5 candidates join on the first day, and then, on every subsequent day, the next 5 candidates join in. Candidate numbered K decided to turn down his offer and thus, Chef adjusts the position by shifting up all the higher numbered candidates. This leads to a change in the joining day of some of the candidates. Help Chef determine the number of candidates who will join on a different day than expected.



#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfCandidate,candidateNumber;

        cout<<"Enter the no. of candidates : ";
        cin>>noOfCandidate;

        cout<<"Enter the candidate number left : ";
        cin>>candidateNumber;

        // The ceil() function in C++ rounds a number up to the nearest integer. For example, ceil(2.5) returns 3, and ceil(-2.5) returns -2

        cout<<"The number of candidates who will join on a different day than expected will be : "<<ceil(noOfCandidate / 5.0) - ceil(candidateNumber / 5.0)<<endl;
    }
}