// There are 2 trains A and B and N stations in a line from 1 to N in order. There is also an array P of length N - 1 such that Pi (1 ≤ i < N) denotes the amount of time any train takes to go from the i-th station to the (i+1)-th station. Initially, both trains are at station 1. Train A departs from station 1 and stops directly at station N. For safety purposes, it is maintained that train B cannot depart from station i unless train A has already reached station (i+1) (1 ≤ i < N). Find the minimum time after which train B reaches station N, once train A departs from station 1.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int final,timeToReach,timeRequired = 0,waitingTime = 0;
        // cout<<"Enter the final destination : ";
        cin>>final;

        while(--final){
            cin>>timeToReach;
            timeRequired += timeToReach;
            waitingTime = max(waitingTime,timeToReach);
        }
        
        cout<<(timeRequired + waitingTime)<<endl;
    }
}