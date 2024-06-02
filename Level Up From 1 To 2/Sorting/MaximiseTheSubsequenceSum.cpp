// Chef has an array A containing N integers. The integers of the array can be positive, negative, or even zero. Chef allows you to choose at most K elements of the array and multiply them by -1. Find the maximum sum of a subsequence you can obtain if you choose the elements of the subsequence optimally.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfArray,valueOfK;
        cout<<"Enter the length of array : ";
        cin>>lengthOfArray;

        cout<<"Enter the value of k : ";
        cin>>valueOfK;

        int arr[lengthOfArray];
        for(int i = 0;i < lengthOfArray;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        sort(arr,arr + lengthOfArray);
        for(int i = 0;i < lengthOfArray;i++){
            if(arr[i] >= 0 || valueOfK == 0) break;
            else{
                arr[i] *= -1;
                valueOfK--;
            }
        }

        long long sum = 0;
        for(int i = 0;i < lengthOfArray;i++){
            if(arr[i] > 0) sum += arr[i];
        }

        cout<<"The maximum sum of a subsequence will be : "<<sum<<endl;
    }
}