// You are given an array A of N elements. For any ordered triplet (i,j,k) such that i, j, and k are pairwise distinct and 1 ≤ i,j,k ≤ N, the value of this triplet is (Ai - Aj) * Ak. You need to find the maximum value among all possible ordered triplets.

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

        long arr[lengthOfArray];
        for(int i = 0;i < lengthOfArray;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        sort(arr,arr + lengthOfArray);
        long ans = (arr[lengthOfArray - 1] - arr[0]) * arr[lengthOfArray - 2];
        cout<<"The maximum value will be : "<<ans<<endl;
    }
}