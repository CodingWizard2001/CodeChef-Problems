// You are given an array A of length N. The interesting value of a subarray is defined as the product of the maximum and minimum elements of the subarray. Find the minimum and maximum interesting value over all subarrays for the given array.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        int arr[n];
        int minVal = INT_MAX,maxVal = INT_MIN;
        for(int i = 0;i < n;i++){
            cin>>arr[i];
            if(arr[i] < minVal) minVal = arr[i];
            if(arr[i] > maxVal) maxVal = arr[i];
        }
        
       long long minInteresting = min({(1LL * minVal * minVal),(1LL * minVal * maxVal),(1LL * maxVal * maxVal)});
       long long maxInteresting = max({(1LL * minVal * minVal),(1LL * minVal * maxVal),(1LL * maxVal * maxVal)});
       
       cout<<minInteresting<<" "<<maxInteresting<<endl;
    }
}