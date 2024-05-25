// Alice and Bob are competing in a challenge. Initially Alice has N problems and Bob has M problems.

// 1.  Each time Alice solves a problem, Bob receives one more problem to solve.
// 2.  Each time Bob solves a problem, Alice receives three more problems to solve.

// Find whether it is possible that both of them have the same number of problems left if they can solve the problems in any arbitrary manner.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfProblemsAliceHave,noOfProblemsBobHave;

        cout<<"Enter the no. of problems Alice got : ";
        cin>>noOfProblemsAliceHave;

        cout<<"Enter the no. of problems Bob got : ";
        cin>>noOfProblemsBobHave;
        
        if(abs(noOfProblemsAliceHave - noOfProblemsBobHave) % 2 == 0) cout<<"It is possible that both of them have the same number of problems left"<<endl;
        
        else cout<<"It is not possible that both of them have the same number of problems left"<<endl;
    }
}