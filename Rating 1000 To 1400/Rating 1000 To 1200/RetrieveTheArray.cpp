// Chef has an array A of length N. Let f(i) denote the sum A1 + A2 +⋯+Ai and let g(i) denote the sum Ai + Ai+1 +⋯+ AN.Chef creates another array B of length N such that Bi = f(i)+ g(i) for all 1 ≤ i ≤N. Now, Chef has lost the original array A and needs your help to recover it, given array B. It is guaranteed that Chef has obtained the array B from a valid array A.



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
        long long brr[len];
        long long sumOfB = 0,sumOfA = 0;
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>brr[i];
            sumOfB += brr[i];
        }
        
        sumOfA = (sumOfB / (len + 1));
        for(int i = 0;i < len;i++){
            cout<<(brr[i] - sumOfA)<<" ";
        }
        cout<<endl;
    }
}