// Chef has recently started playing chess, and wants to play as many games as possible. He calculated that playing one game of chess takes at least 20 minutes of his time. Chef has N hours of free time. What is the maximum number of complete chess games he can play in that time?

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int freeTime;
        cout<<"Enter the free time Chef have : ";
        cin>>freeTime;
        cout<<"The maximum number of complete chess games he can play in that time will be : "<<(freeTime * 60) / 20<<endl;
    }
}