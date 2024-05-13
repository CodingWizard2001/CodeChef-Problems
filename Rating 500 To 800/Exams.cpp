// In Chef-land, there are X schools, and each school has Y students. The year end results are in and a total of Z students passed the exams. Assuming that all students appeared for the exams, find whether the number of students who passed in Chef-land was strictly greater than 50%.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-case : ";
    cin>>t;
    while(t--){
        int x,y,z;
        cout<<"Enter no. of schools : ";
        cin>>x;
        cout<<"Enter no. of students : ";
        cin>>y;
        cout<<"Enter no. of passed students : ";
        cin>>z;
        float result = ((z * 100.0) / (x * y));
        if(result > 50) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}