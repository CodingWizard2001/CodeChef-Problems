// You will be given a zero-indexed array A. You need to rearrange its elements in such a way that the following conditions are satisfied:

// 1.  A[i] ≤ A[i+1] if i is even.
// 2.  A[i] ≥ A[i+1] if i is odd.

// In other words the following inequality should hold: A[0] ≤ A[1] ≥ A[2] ≤ A[3] ≥ A[4], and so on. Operations ≤ and ≥ should alter.




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

        vector<int>arr(len);
        for(int i = 0;i < len;i++) cin>>arr[i];
        for(int i = 0;i < (len - 1);i++){
            if(i % 2 == 0){
                if(arr[i] > arr[i + 1]) swap(arr[i],arr[i + 1]);
            }
            else{
                if(arr[i] < arr[i + 1]) swap(arr[i],arr[i + 1]);
            }
        }
        for(int i = 0;i < len;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}