// Chef has a bucket having a capacity of K liters. It is already filled with X liters of water. Find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int capacityOfBucket,alreadyFilled;
        cout<<"Enter the capacity of bucket : ";
        cin>>capacityOfBucket;
        cout<<"Enter how many liter already filled in that buckets : ";
        cin>>alreadyFilled;
        cout<<"The maximum amount of extra water in liters that Chef can fill in the bucket without overflowing will be : "<<(capacityOfBucket - alreadyFilled)<<endl;
    }
}