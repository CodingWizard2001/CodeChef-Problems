// There are 3 problems in a contest namely A,B,C respectively. Alice bets Bob that problem C is the hardest while Bob says that problem B will be the hardest. You are given three integers SA,SB,SC which denotes the number of successful submissions of the problems A,B,C respectively. It is guaranteed that each problem has a different number of submissions. Determine who wins the bet.

// 1.  If Alice wins the bet (i.e. problem C is the hardest), then output Alice.
// 2.  If Bob wins the bet (i.e. problem B is the hardest), then output Bob.
// 3.  If no one wins the bet (i.e. problem A is the hardest), then output Draw.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int numberOfSubmissionOfA,numberOfSubmissionOfB,
        numberOfSubmissionOfC;
        cout<<"Enter the number of successful submissions of problem A : ";
        cin>>numberOfSubmissionOfA;
        cout<<"Enter the number of successful submissions of problem B : ";
        cin>>numberOfSubmissionOfB;
        cout<<"Enter the number of successful submissions of problem C : ";
        cin>>numberOfSubmissionOfC;
        int minimum = 0;
        if(numberOfSubmissionOfA < numberOfSubmissionOfB && numberOfSubmissionOfA < numberOfSubmissionOfC){
            minimum = numberOfSubmissionOfA;
        }
        else if(numberOfSubmissionOfB < numberOfSubmissionOfA && numberOfSubmissionOfB < numberOfSubmissionOfC){
            minimum = numberOfSubmissionOfB;
        }
        else minimum = numberOfSubmissionOfC;
        if(minimum == numberOfSubmissionOfA) cout<<"The bet was DRAW"<<endl;
        else if(minimum == numberOfSubmissionOfB) cout<<"The bet was win by BOB"<<endl;
        else cout<<"The bet was win by ALICE"<<endl;
    }
}