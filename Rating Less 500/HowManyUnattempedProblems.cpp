// Our Chef is currently practicing on CodeChef and is a beginner. The count of 'All Problems' in the Beginner section is X. Our Chef has already 'Attempted' Y problems among them. How many problems are yet 'Un-attempted'?


#include <iostream>
using namespace std;
int main(){
    int totalProblems,attemptedProblems;
    cout<<"Enter the total no. of problems : ";
    cin>>totalProblems;
    cout<<"Enter the total no. of attempt problems : ";
    cin>>attemptedProblems;
    cout<<"Unattempted problems are : "<<(totalProblems - attemptedProblems)<<endl;
}