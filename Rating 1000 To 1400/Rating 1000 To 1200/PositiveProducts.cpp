// You are given an array A of length N. Find the number of pairs of indices (i,j) such that

// 1.  1 ≤ i < j ≤N
// 2.  Ai ⋅ Aj > 0




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the array : ";
        cin>>len;
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        long positiveCount = 0,negativeCount = 0;
        for(int i = 0;i < len;i++){
           if(arr[i] > 0) positiveCount++;
           else if(arr[i] < 0) negativeCount++;
        }
        
        cout<<(positiveCount * (positiveCount - 1)) / 2 + (negativeCount * (negativeCount - 1)) / 2<<endl;
    }
}