// You have been recently hired as a developer in CodeChef. Your first mission is to implement a feature that will determine the number of submissions that were judged late in a contest. There are N submissions, numbered 1 through N. For each valid i, the i-th submission was submitted at time Si and judged at time Ji (in minutes). Submitting and judging both take zero time. Please determine how many submissions received their verdicts after a delay of more than 5 minutes.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int totalSubmission;
        cout<<"Enter the no. of total submissions : ";
        cin>>totalSubmission;

        int delay = 0;

        while(totalSubmission--){
            int submissionTime,judgingTime;

            cout<<"Enter the time to submit : ";
            cin>>submissionTime;

            cout<<"Enter the time to Judge : ";
            cin>>judgingTime;

            if(abs(submissionTime - judgingTime) > 5) delay++;
        }
        cout<<"Total no. of submissions received their verdicts after a delay of more than 5 minutes will be : "<<delay<<endl;
    }
}