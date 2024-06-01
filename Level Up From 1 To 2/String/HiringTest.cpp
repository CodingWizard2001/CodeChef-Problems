// A company conducted a coding test to hire candidates. N candidates appeared for the test, and each of them faced M problems. Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'), or solved completely (denoted by 'F'). To pass the test, each candidate needs to either solve X or more problems completely, or solve ( X − 1) problems completely, and Y or more problems partially. Given the above specifications as input, print a line containing N integers. The ith integer should be 1 if the ith candidate has passed the test, else it should be 0.


#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfCandidates,noOfProblems;
        cout<<"Enter the no. of candidates : ";
        cin>>noOfCandidates;

        cout<<"Enter the no. of problems : ";
        cin>>noOfProblems;

        int needToSolveProblemCompletely,needToSolveProblemPartially;
        cout<<"Enter the no. of problems need to solve completely : ";
        cin>>needToSolveProblemCompletely;

        cout<<"Enter the no. of problems need to solve partially : ";
        cin>>needToSolveProblemPartially;

        string answer = "";
        while(noOfCandidates--){
            string result;
            cout<<"Enter the student's result : ";
            cin>>result;
            
            int partially = 0,completely = 0;
            for(int i = 0;i < noOfProblems;i++){
                if(result[i] == 'P') partially++;
                else if(result[i] == 'F') completely++;
            }

            if(completely >= needToSolveProblemCompletely || (completely >= (needToSolveProblemCompletely - 1) && partially >= needToSolveProblemPartially)) answer += '1';

            else answer += '0';
        }
        cout<<"The result will be : "<<answer<<endl;
    }
}