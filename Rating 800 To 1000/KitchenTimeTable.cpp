// There are N students living in the dormitory of Berland State University. Each of them sometimes wants to use the kitchen, so the head of the dormitory came up with a timetable for kitchen's usage in order to avoid the conflicts:

// 1.  The first student starts to use the kitchen at the time 0 and should finish the cooking not later than at the time A1.
// 2.  The second student starts to use the kitchen at the time A1 and should finish the cooking not later than at the time A2 And so on.
// 3.  The N-th student starts to use the kitchen at the time AN-1 and should finish the cooking not later than at the time AN

// The holidays in Berland are approaching, so today each of these N students wants to cook some pancakes. The i-th student needs Bi units of time to cook. The students have understood that probably not all of them will be able to cook everything they want. How many students will be able to cook without violating the schedule?



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudent;
        cout<<"Enter the no. of student : ";
        cin>>noOfStudent;

        int timeSchedule[noOfStudent];
        int timeTakenByEachStudent[noOfStudent];

        for(int i = 0;i < noOfStudent;i++){
            cout<<"Enter the time is scheduled for "<<i<<"th student : ";
            cin>>timeSchedule[i];
        }

        for(int i = 0;i < noOfStudent;i++){
            cout<<"Enter the time is required for "<<i<<"th student to make pan cake: ";
            cin>>timeTakenByEachStudent[i];
        }

        int ableToCook = 0;

        for(int i = 0;i < noOfStudent;i++){
            if(i == 0){
                if(timeTakenByEachStudent[i] <= timeSchedule[i]) ableToCook++;
            }
            else{
                if(timeTakenByEachStudent[i] <= (timeSchedule[i] - timeSchedule[i - 1])) ableToCook++;
            }
        }
        cout<<"No. of students will be able to cook without violating the schedule will be : "<<ableToCook<<endl;
    }
}