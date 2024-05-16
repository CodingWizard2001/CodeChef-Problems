// A geyser has a capacity of X litres of water and a bucket has a capacity of Y litres of water. One person requires exactly 2 buckets of water to take a bath. Find the maximum number of people that can take bath using water from one completely filled geyser.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int capacityOfGeyser,capacityOfBuckets;
        cout<<"Enter the capacity of geyser : ";
        cin>>capacityOfGeyser;
        cout<<"Enter the capacity of buckets : ";
        cin>>capacityOfBuckets;
        if((capacityOfBuckets * 2) > capacityOfGeyser) cout<<"Total person can take bath : "<<0<<endl;
        else cout<<"Total person can take bath : "<<(capacityOfGeyser / (capacityOfBuckets * 2))<<endl;
    }
}