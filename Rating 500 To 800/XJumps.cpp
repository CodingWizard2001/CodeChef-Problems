// Chef is currently standing at stair 0 and he wants to reach stair numbered X. Chef can climb either Y steps or 1 step in one move. Find the minimum number of moves required by him to reach exactly the stair numbered X.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int totalStair,yStep;
        cout<<"Enter total no. of stairs : ";
        cin>>totalStair;
        cout<<"Enter the value of y step : ";
        cin>>yStep;
        int step = (totalStair / yStep);
        cout<<"Total step required : "<<(step + ((totalStair - (step * yStep)) / 1))<<endl;
    }
}