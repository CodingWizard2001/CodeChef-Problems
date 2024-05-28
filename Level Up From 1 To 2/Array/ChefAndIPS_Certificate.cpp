// There were N students (numbered 1 through N) participating in the Indian Programming Camp (IPC) and they watched a total of K lectures (numbered 1 through K). For each student i and each lecture j, the i-th student watched the j-th lecture for Tij minutes. Additionally, for each student i, we know that this student asked the question, "What is the criteria for getting a certificate?" Qi times. The criteria for getting a certificate is that a student must have watched at least M minutes of lectures in total and they must have asked the question no more than 10 times.Find out how many participants are eligible for a certificate.


#include <iostream>
using namespace std;
int main(){
    int noOfStudents,minimumTimeRequired,noOfLectures,totalStudent = 0;

    cout<<"Enter the no. of students : ";
    cin>>noOfStudents;

    cout<<"Enter the minimum time to required to get certificate : ";
    cin>>minimumTimeRequired;

    cout<<"Enter the no. of lectures : ";
    cin>>noOfLectures;

    while(noOfStudents--){
        int arr[noOfLectures + 1];

        for(int i = 0;i < (noOfLectures + 1);i++){
            cout<<"Enter the duration of "<<(i + 1)<<"th lecture : ";
                cin>>arr[i];
        }

        int sum = 0;

        for(int i = 0;i < noOfLectures;i++) sum += arr[i];

        if(sum >= minimumTimeRequired && arr[noOfLectures] <= 10) totalStudent++;
    }
    cout<<"No. of student will certified : "<<totalStudent<<endl;
}