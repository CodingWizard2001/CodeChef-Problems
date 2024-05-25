// Recently, Chef's College Examination has concluded. He was enrolled in 3 courses and he scored A,B,C in them, respectively. To pass the semester, he must score at least Amin,Bmin,Cmin marks in the respective subjects along with a cumulative score of at least Tmin, i.e, A + B + C ≥ Tmin. Given seven integers Amin,Bmin,Cmin,Tmin​ ,A,B,C, tell whether Chef passes the semester or not.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int minimumScoreInSubjectA,minimumScoreInSubjectB,minimumScoreInSubjectC,
        minimumTotalScore,scoreInSubjectA,scoreInSubjectB,scoreInSubjectC;

        cout<<"Enter the minimum score in subject A : ";
        cin>>minimumScoreInSubjectA;

        cout<<"Enter the minimum score in subject B : ";
        cin>>minimumScoreInSubjectB;

        cout<<"Enter the minimum score in subject C : ";
        cin>>minimumScoreInSubjectC;

        cout<<"Enter the minimum total score : ";
        cin>>minimumTotalScore;

        cout<<"Enter the score in subject A : ";
        cin>>scoreInSubjectA;

        cout<<"Enter the score in subject B : ";
        cin>>scoreInSubjectB;

        cout<<"Enter the score in subject C : ";
        cin>>scoreInSubjectC;

        if((minimumScoreInSubjectA <= scoreInSubjectA) && (minimumScoreInSubjectB <= scoreInSubjectB) && (minimumScoreInSubjectC <= scoreInSubjectC) && (scoreInSubjectA + scoreInSubjectB + scoreInSubjectC) >= minimumTotalScore) cout<<"Chef passes the semester"<<endl;
        
        else cout<<"Chef can't passes the semester"<<endl;
    }
}