// Chef is struggling to pass a certain college course.The test has a total of N questions, each question carries 3 marks for a correct answer and -1 for an incorrect answer. Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got X questions correct and the rest of them incorrect. For Chef to pass the course he must score at least P marks. Will Chef be able to pass the exam or not?

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfQuestion,correctAnswer,PassingMarks;
        cout<<"Enter the no. of questions : ";
        cin>>noOfQuestion;
        cout<<"Enter the no. of correct answers : ";
        cin>>correctAnswer;
        cout<<"Enter the passing marks : ";
        cin>>PassingMarks;
        int correctMarks = (3 * correctAnswer);
        int incorrectAnswer = (noOfQuestion - correctAnswer);
        if(PassingMarks <= (correctAnswer - incorrectAnswer)) cout<<"Chef will pass the exam"<<endl;
        else cout<<"Chef will fail the exam"<<endl;
    }
}