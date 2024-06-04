// JJ has an array A of size N. He can perform the following operations on the array at most K times:

// 1.  Set Ai := Ai+1 where 1 ≤ i ≤ N - 1
// 2.  Set Ai := Ai-1 where 2 ≤ i ≤ N

// He wants to maximize the value of the minimum element of the array A. Formally, he wants to maximize the value of min Ai.



#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase,noOfOperationCanPerform;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfArray;
        cout<<"Enter the length of array : ";
        cin>>lengthOfArray;

        cout<<"Enter the no. of operation can perform : ";
        cin>>noOfOperationCanPerform;

        int arr[lengthOfArray];
        for(int i = 0;i < lengthOfArray;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        sort(arr,arr + lengthOfArray);
        
        if(noOfOperationCanPerform >= (lengthOfArray - 1)) cout<<"The value of the minimum element will be : "<<arr[lengthOfArray - 1]<<endl;

        else cout<<"The value of the minimum element will be : "<<arr[noOfOperationCanPerform]<<endl;
    }
}