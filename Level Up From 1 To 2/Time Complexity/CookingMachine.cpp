// Chef is on a vacation these days, so his friend Chefza is trying to solve Chef's everyday tasks. Today's task is to make a sweet roll. Rolls are made by a newly invented cooking machine. The machine is pretty universal - it can make lots of dishes and Chefza is thrilled about this. To make a roll, Chefza has to set all the settings to specified integer values. There are lots of settings, each of them set to some initial value. The machine is pretty complex and there is a lot of cooking to be done today, so Chefza has decided to use only two quick ways to change the settings. In a unit of time, he can pick one setting (let's say its current value is v) and change it in one of the following ways. If v is even, change this setting to v/2. If v is odd, change it to (v - 1)/2. Change setting to 2 × v. The receipt is given as a list of integer values the settings should be set to. It is guaranteed that each destination setting can be represented as an integer power of 2. Since Chefza has just changed his profession, he has a lot of other things to do. Please help him find the minimum number of operations needed to set up a particular setting of the machine. You can prove that it can be done in finite time.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB,count = 0;
        cout<<"Enter the value of A : ";
        cin>>valueOfA;

        cout<<"Enter the value of B : ";
        cin>>valueOfB;

        while(valueOfB % valueOfA != 0){
            valueOfA /= 2;
            count++;
        }

        while(valueOfB != valueOfA){
            valueOfA *= 2;
            count++;
        }

        cout<<"The minimum number of operations needed to set up a particular setting of the machine will be : "<<count<<endl;
    }
}