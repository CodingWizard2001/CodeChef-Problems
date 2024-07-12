// There are N students in a class. Recently, an exam on Advanced Algorithms was conducted with maximum score M and minimum score 0. The average score of the class was found out to be exactly X. Given that a student having score strictly greater than the average receives an A grade, find the maximum number of students that can receive an A grade.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudents,maxMarks,avgMarks;

        // cout<<"Enter the no. of students : ";
        cin>>noOfStudents;

        // cout<<"Enter the maximum marks : ";
        cin>>maxMarks;
        
        // cout<<"Enter the average marks : ";
        cin>>avgMarks;
        
        if(maxMarks <= avgMarks) cout<<0<<endl;
        else{
            int a = (noOfStudents * avgMarks);
            cout<<(a / (avgMarks + 1))<<endl;
        }
    }
}