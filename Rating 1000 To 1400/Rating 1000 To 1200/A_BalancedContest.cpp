// Chef wants to organize a contest. Predicting difficulty levels of the problems can be a daunting task. Chef wants his contests to be balanced in terms of difficulty levels of the problems. Assume a contest had total P participants. A problem that was solved by at least half of the participants (i.e. P / 2 (integer division)) is said to be cakewalk difficulty. A problem solved by at max P / 10 (integer division) participants is categorized to be a hard difficulty.Chef wants the contest to be balanced. According to him, a balanced contest must have exactly 1 cakewalk and exactly 2 hard problems. You are given the description of N problems and the number of participants solving those problems. Can you tell whether the contest was balanced or not?



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long noOfProblems,noOfParticipant;

        // cout<<"Enter the no. of problems : ";
        cin>>noOfProblems;

        // cout<<"Enter the no. of participants : ";
        cin>>noOfParticipant;

        long long arr[noOfProblems];
        for(auto &i : arr) cin>>i;
        
        long long cakeWalk = 0,hardProblem = 0;
        for (auto it: arr) {
            if (it <= (noOfParticipant / 10)) hardProblem++;
            else if (it >= (noOfParticipant / 2)) cakeWalk++;
        }
        
        if(hardProblem == 2 && cakeWalk == 1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}