// Finally, College has started calling students back to campus. There are so many students and thus due to some safety measures the college can’t call back all the students on the same day. It currently has the capacity of screening K students on a single day. There is a total of N students. What's the minimum number of days required for all the students to be back on the campus?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudents,noOfCapacityScreeningStudents;

        cout<<"Enter the no. of students : ";
        cin>>noOfStudents;

        cout<<"Enter the no. of capacity screening students : ";
        cin>>noOfCapacityScreeningStudents;

        if(noOfStudents % noOfCapacityScreeningStudents == 0) cout<<"The minimum number of days required for all the students to be back on the campus will be : "<<(noOfStudents / noOfCapacityScreeningStudents)<<endl;

        else cout<<"The minimum number of days required for all the students to be back on the campus will be : "<<(noOfStudents / noOfCapacityScreeningStudents) + 1<<endl;
    }
}