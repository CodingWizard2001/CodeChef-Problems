// Chef has an array A having N elements. Chef wants to make all the elements of the array equal by repeating the following move. Choose any integer K between 1 and N (inclusive). Then choose K distinct indices i1,i2,…,iK, and increase the values of Ai1,Ai2,…,AiK by 1. Find the minimum number of moves required to make all the elements of the array equal.


#include <iostream>
#include <climits>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfElements;
        cout<<"Enter the no. of elements : ";
        cin>>noOfElements;

        int arr[noOfElements];

        for(int i = 0;i < noOfElements;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th elements : ";
            cin>>arr[i];
        }

        int maximumValue = INT_MIN,minimumValue = INT_MAX;

        for(int i = 0;i < noOfElements;i++){
            if(arr[i] > maximumValue) maximumValue = arr[i];
            if(arr[i] < minimumValue) minimumValue = arr[i];
        }

        cout<<"The minimum number of moves required to make all the elements of the array equal will be : "<<(maximumValue - minimumValue)<<endl;
    }
}