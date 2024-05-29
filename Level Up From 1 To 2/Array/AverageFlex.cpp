// There are N students in a class, where the i-th student has a score of Ai. The i-th student will boast if and only if the number of students scoring less than or equal Ai is greater than the number of students scoring greater than Ai. Find the number of students who will boast.


#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudents;
        cout<<"Enter the no. of students : ";
        cin>>noOfStudents;

        int students[noOfStudents];

        for(int i = 0;i < noOfStudents;i++){
            cout<<"Enter the score of "<<(i + 1)<<"th student : ";
            cin>>students[i];
        }
        int curr = 0;
        sort(students,students + noOfStudents);

        for(int i = (noOfStudents / 2);i >= 0;i--){
            if(students[i] != students[noOfStudents / 2]){
                curr = (i + 1);
                break;
            }
        }
        
        cout<<"The number of students who will boast will be : "<<(noOfStudents - curr)<<endl;
    }
}