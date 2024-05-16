// Chef is currently working for a secret research group called NEXTGEN. While the rest of the world is still in search of a way to utilize Helium-3 as a fuel, NEXTGEN scientists have been able to achieve 2 major milestones:

// 1. Finding a way to make a nuclear reactor that will be able to utilize Helium-3 as a fuel
// 2. Obtaining every bit of Helium-3 from the moon's surface

// Moving forward, the project requires some government funding for completion, which comes under one condition: to prove its worth, the project should power Chef-land by generating at least A units of power each year for the next B years. Help Chef determine whether the group will get funded assuming that the moon has X grams of Helium-3 and 1 gram of Helium-3 can provide Y units of power.


#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int a,b,x,y;
        cout<<"Enter no. of units powers required : ";
        cin>>a;
        cout<<"Enter no. of units powers required in a year : ";
        cin>>b;
        cout<<"Enter no. of grams of Helium-3 found in moon : ";
        cin>>x;
        cout<<"Enter no. of powers produce by 1 gram of Helium-3 : ";
        cin>>y;
        if((x * y) >= (a * b)) cout<<"Yes the group will funded"<<endl;
        else cout<<"No the group will not funded"<<endl;
    }
}