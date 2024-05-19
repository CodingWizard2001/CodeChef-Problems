// Chef took an examination two times. In the first attempt, he scored X marks while in the second attempt he scored Y marks. According to the rules of the examination, the best score out of the two attempts will be considered as the final score. Determine the final score of the Chef.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int marksObtainBy1stExam,marksObtainBy2ndExam;
        cout<<"Enter marks obtain by first exam : ";
        cin>>marksObtainBy1stExam;
        cout<<"Enter marks obtain by first exam : ";
        cin>>marksObtainBy2ndExam;
        if(marksObtainBy1stExam > marksObtainBy2ndExam) cout<<"The final score of the Chef will be : "<<marksObtainBy1stExam<<endl;
        else cout<<"The final score of the Chef will be : "<<marksObtainBy2ndExam<<endl;
    }
}