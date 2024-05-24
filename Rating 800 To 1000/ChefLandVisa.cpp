// Ash is trying to get visa to Chefland. For the visa to be approved, he needs to satisfy the following three criteria:

// 1.  Solve at least x1 problems on Codechef.
// 2.  Have at least y1 current rating on Codechef.
// 3.  Make his last submission at most z1 months ago.

// You are given the number of problems solved by Chef (x2), his current rating (y2) and the information that he made his last submission z2 months ago. Determine whether he will get the visa.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int requiredSolvingProblem,alreadySolvingProblems,requiredRating,currentRating,requiredLastSubmission,currentSubmission;
        cout<<"Enter the required solving problem : ";
        cin>>requiredSolvingProblem;
        cout<<"Enter the currently solved problem : ";
        cin>>alreadySolvingProblems;
        cout<<"Enter the required rating : ";
        cin>>requiredRating;
        cout<<"Enter the current rating : ";
        cin>>currentRating;
        cout<<"Enter the required last submission : ";
        cin>>requiredLastSubmission;
        cout<<"Enter the current last submission : ";
        cin>>currentSubmission;

        if(requiredSolvingProblem <= alreadySolvingProblems && requiredRating >= currentRating && requiredLastSubmission <= currentSubmission) cout<<"He will get Visa"<<endl;
        else cout<<"He will not get Visa"<<endl;
    }
}