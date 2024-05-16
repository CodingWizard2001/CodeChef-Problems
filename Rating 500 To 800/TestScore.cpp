// In a test, there are N problems, each carrying X marks. In each problem, Chef either received X marks or 0 marks. Determine whether is it possible for Chef to achieve exactly Y marks.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int noOfQuestion,marks,getMarks;
        cout<<"Enter no. of question are given : ";
        cin>>noOfQuestion;
        cout<<"Enter the marks of each question : ";
        cin>>marks;
        cout<<"Enter the marks you get : ";
        cin>>getMarks;
        int ans = 0;
        bool flag = false;
        while(noOfQuestion--){
            ans += marks;
            if(ans == getMarks) flag = true;
        }
        if(getMarks == 0) flag = true;
        if(flag == true) cout<<"He Can get exactly "<<getMarks<<" number"<<endl;
        else cout<<"He Can't get exactly "<<getMarks<<" number"<<endl;
    }
}