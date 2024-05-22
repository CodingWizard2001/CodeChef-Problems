// Alice has a bucket of water initially having W litres of water in it. The maximum capacity of the bucket is X liters. Alice turned on the tap and the water starts flowing into the bucket at a rate of Y litres/hour. She left the tap running for exactly Z hours. Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int bucketWater,maximumCapacityOfBucket,flowingRate,time;
        cout<<"Enter the liter of water that bucket already have : ";
        cin>>bucketWater;
        cout<<"Enter the maximum capacity of the bucket : ";
        cin>>maximumCapacityOfBucket;
        cout<<"Enter the flowing rate from the tab : ";
        cin>>flowingRate;
        cout<<"Enter the time of tap running : ";
        cin>>time;
        if((bucketWater + (flowingRate * time)) == maximumCapacityOfBucket) cout<<"The bucket has been filled exactly"<<endl;
        else if((bucketWater + (flowingRate * time)) > maximumCapacityOfBucket) cout<<"The bucket has been overflown"<<endl;
        else cout<<"The bucket has been unfilled"<<endl;
    }
}