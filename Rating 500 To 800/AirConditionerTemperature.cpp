// There are three people sitting in a room - Alice, Bob, and Charlie. They need to decide on the temperature to set on the air conditioner. Everyone has a demand each:

// 1. Alice wants the temperature to be at least A degrees.
// 2. Bob wants the temperature to be at most B degrees.
// 3. Charlie wants the temperature to be at least C degrees.

// Can they all agree on some temperature, or not?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int a,b,c;
        cout<<"Enter the at least temperature alice wants : ";
        cin>>a;
        cout<<"Enter the at most temperature bob wants : ";
        cin>>b;
        cout<<"Enter the at least temperature charlie wants : ";
        cin>>c;
        if(a <= b && b >= c) cout<<"They all agree on some temperature"<<endl<<endl;
        else cout<<"They all are not agree on some temperature"<<endl<<endl;
    }
}