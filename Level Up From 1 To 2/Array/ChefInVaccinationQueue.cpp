// There are N people in the vaccination queue, Chef is standing on the Pth position from the front of the queue. It takes X minutes to vaccinate a child and Y minutes to vaccinate an elderly person. Assume Chef is an elderly person. You are given a binary array A1,A2,…,AN of length N, where Ai = 1 denotes there is an elderly person standing on the ith position of the queue, Ai = 0 denotes there is a child standing on the ith position of the queue. You are also given the three integers P,X,Y. Find the number of minutes after which Chef's vaccination will be completed.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfQueue,ChefPostion,timeRequiredForChild,timeRequiredForElder;
        
        cout<<"Enter the size of the queue : ";
        cin>>noOfQueue;
        
        cout<<"Enter the position of Chef : ";
        cin>>ChefPostion;
        
        cout<<"Enter the time required for a child : ";
        cin>>timeRequiredForChild;
        
        cout<<"Enter the time required for a elder : ";
        cin>>timeRequiredForElder;

        int arr[noOfQueue];

        for(int i = 0;i < noOfQueue;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int timeRequiredForChef = 0;

        for(int i = 0;i < ChefPostion;i++){
            if(arr[i] == 1) timeRequiredForChef += timeRequiredForElder;

            else timeRequiredForChef += timeRequiredForChild;
        }

        cout<<"No. of minutes have to Chef : "<<timeRequiredForChef<<endl;
    }
}