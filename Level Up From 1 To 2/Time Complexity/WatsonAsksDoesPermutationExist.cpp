// Watson gives an array A of N integers A1, A2, ..., AN to Sherlock. He wants Sherlock to reorganize the array in a way such that no two adjacent numbers differ by more than 1. Formally, if reorganized array is B1, B2, ..., BN, then the condition that | Bi - Bi + 1 | ≤ 1, for all 1 ≤ i < N(where |x| denotes the absolute value of x) should be met. Sherlock is not sure that a solution exists, so he asks you.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfArray;
        cout<<"Enter the length of array : ";
        cin>>lengthOfArray;

        int arr[lengthOfArray];
        for(int i = 0;i < lengthOfArray;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        bool flag = true;
        sort(arr,arr + lengthOfArray);
        for(int i = 0;i < (lengthOfArray - 1);i++){
            if(abs(arr[i] - arr[i + 1]) > 1){
                flag = false;
                break;
            }
        }
        if(flag == true) cout<<"Solution exists"<<endl;
        else cout<<"Solution doesn't exist"<<endl;
    }
}