// Chef is deriving weird ways to sort his array. Currently he is trying to sort his arrays in increasing order by reversing some of his subarrays. To make it more challenging for himself, Chef decides that he can reverse only those subarrays that have sum of its elements at most X. Soon he notices that it might not be always possible to sort the array with this condition. Can you help the Chef by telling him if the given array can be sorted by reversing subarrays with sum at most X. More formally, for a given array A and an integer X, check whether the array can be sorted in increasing order by reversing some (possibly none) of the subarrays such that the sum of all elements of the subarray is at most X.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length,valueOfX;
        cout<<"Enter the length of the array : ";
        cin>>length;

        cout<<"Enter the value of X : ";
        cin>>valueOfX;

        vector<int>arr(length);
        for(int i = 0;i < length;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        bool flag = true;
        for(int i = 0;i < (length - 1);i++){
            if(arr[i] > arr[i + 1]){
                if(arr[i] +arr[i + 1] < valueOfX) swap(arr[i],arr[i+1]);

                else{
                    flag = false;
                    break;
                }
            }
        }

        if(flag == true) cout<<"Given array can be sorted by reversing subarrays with sum"<<endl;

        else cout<<"Given array can't be sorted by reversing subarrays with sum"<<endl;
    }
}