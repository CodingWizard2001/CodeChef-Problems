// Chef and Chefina are competing against each other in a programming contest. They were both able to solve all the problems in the contest, so the winner between them must be decided by time penalty. Chef solved all the problems in X minutes and made P wrong submissions, while Chefina solved all the problems in Y minutes and made Q wrong submissions. Who won the competition (or was it a draw)?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int timeTakenByChef,timeTakenByChefina,wrongSubmissionByChef,wrongSubmissionByChefina;
        cout<<"Enter the time take by Chef to solve : ";
        cin>>timeTakenByChef;
        cout<<"Enter the time take by Chefina to solve : ";
        cin>>timeTakenByChefina;
        cout<<"Enter the no. of wrong submission Chef made : ";
        cin>>wrongSubmissionByChef;
        cout<<"Enter the no. of wrong submission Chefina made : ";
        cin>>wrongSubmissionByChefina;
        int penaltyScoreOfChef = (timeTakenByChef + (wrongSubmissionByChef * 10));
        int penaltyScoreOfChefina = (timeTakenByChefina + (wrongSubmissionByChefina * 10));
        if(penaltyScoreOfChef == penaltyScoreOfChefina) cout<<"It's a draw"<<endl;
        else if(penaltyScoreOfChef < penaltyScoreOfChefina) cout<<"Chef won the competition"<<endl;
        else cout<<"Chefina won the competition"<<endl;
    }
}