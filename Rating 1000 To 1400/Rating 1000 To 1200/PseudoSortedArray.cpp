// An array A of length N is said to be pseudo-sorted if it can be made non-decreasing after performing the following operation at most once. Choose an i such that 1 ≤ i ≤ N − 1 and swap Ai and Ai+1. Given an array A, determine if it is pseudo-sorted or not.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the strings : ";
        cin>>len;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int count = 0;
        bool flag = true;
        for(int i = 0;i < (len - 1);i++){
            if(arr[i] > arr[i + 1]){
                count++;
                swap(arr[i],arr[i + 1]);
                if(count > 1){
                    flag = false;
                    break;
                }
            }
        }

        for(int i = 0;i < (len - 1);i++){
            if(arr[i] > arr[i + 1]) count++;
            if(count > 1){
                    flag = false;
                    break;
                }
        }
        
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}