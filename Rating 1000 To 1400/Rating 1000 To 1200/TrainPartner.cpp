// Rahul and Rashi are off to the wedding of a close relative. This time they have to travel without their guardians. Rahul got very interested in the arrangement of seats inside the train coach.

// The entire coach could be viewed as an arrangement of consecutive blocks of size 8.


//          Berth Number   	    Compartment
//              1 -  8               1

//              9 - 16               2

//              17 - 24              3

// ... and so on

// Each of these size-8 blocks are further arranged as:


//  1LB,  2MB,  3UB,  4LB,  5MB,  6UB,  7SL,  8SU  
//  9LB, 10MB, ...
//  ...   
//  ...
// Here LB denotes lower berth, MB middle berth and UB upper berth. The following berths are called Train-Partners:


//                3UB   |  6UB  
//                2MB   |  5MB  
//                1LB   |  4LB  
//                7SL   |  8SU  

// and the pattern is repeated for every set of 8 berths.Rahul and Rashi are playing this game of finding the train partner of each berth. Can you write a program to do the same?




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int num;
        // cout<<"Enter a number : ";
        cin>>num;
        if(num % 8 == 0) cout<<num - 1<<"SL"<<endl;
        else if(num % 8 == 7) cout<<num + 1<<"SU"<<endl;
        else if(num % 8 == 1) cout<<num + 3<<"LB"<<endl;
        else if(num % 8 == 4) cout<<num - 3<<"LB"<<endl;
        else if(num % 8 == 2) cout<<num + 3<<"MB"<<endl;
        else if(num % 8 == 5) cout<<num - 3<<"MB"<<endl;
        else if(num % 8 == 3) cout<<num + 3<<"UB"<<endl;
        else if(num % 8 == 6) cout<<num - 3<<"UB"<<endl;
    }
}