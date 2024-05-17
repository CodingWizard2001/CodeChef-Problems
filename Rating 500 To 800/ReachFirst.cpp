// Chef is standing at coordinate A while Chefina is standing at coordinate B. In one step, Chef can increase or decrease his coordinate by at most K.Determine the minimum number of steps required by Chef to reach Chefina.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int coordinateA,coordinateB,steps;
        cout<<"Enter the co-ordinate of chef : ";
        cin>>coordinateA;
        cout<<"Enter the co-ordinate of cheffina : ";
        cin>>coordinateB;
        cout<<"Enter the steps he can take at once : ";
        cin>>steps;
        if(abs(coordinateA - coordinateB) % steps == 0) cout<<"Total step need to take : "<<(abs(coordinateA - coordinateB) / steps)<<endl;
        else cout<<"Total step need to take : "<<(abs(coordinateA - coordinateB) / steps) + 1<<endl;
    }
}