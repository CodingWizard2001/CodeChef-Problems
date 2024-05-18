// The working hours of Chef’s kitchen are from X pm to Y pm (1 ≤X <Y ≤12). Find the number of hours Chef works.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int startTiming,endTiming;
        cout<<"Enter the start time : ";
        cin>>startTiming;
        cout<<"Enter the end time : ";
        cin>>endTiming;
        cout<<"The number of hours Chef have to work : "<<(endTiming - startTiming)<<endl;
    }
}