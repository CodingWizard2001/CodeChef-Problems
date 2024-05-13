// Recently Chef joined a new company. In this company, the employees have to work for X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for Y hours ( Y < X ) on Friday. Saturdays and Sundays are holidays. Determine the total number of working hours in one week.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-case : ";
    cin>>t;
    while(t--){
        int x,y;
        cout<<"Enter no. of hours to work in Monday to Thursday : ";
        cin>>x;
        cout<<"Enter no. of hours to work in Chill's day : ";
        cin>>y;
        cout<<"Total amount of hours to worked : "<<(4 * x) + y<<endl;
    }
}