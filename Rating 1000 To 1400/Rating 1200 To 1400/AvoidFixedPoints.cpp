// Chef has a sequence of N integers A = [A1,A2,…,AN]. He can perform the following operation any number of times (possibly, zero): Choose any positive integer K and insert it at any position of the sequence (possibly the beginning or end of the sequence, or in between any two elements). Chef wants this sequence to satisfy the following condition: for each 1 ≤ i ≤ ∣A∣, Ai ≠ i. Here, |A| denotes the length of A. Help Chef to find the minimum number of operations that he has to perform to achieve this goal. It can be proved that under the constraints of the problem, it's always possible to achieve this goal in a finite number of operations.




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
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        int count = 0;
        for(int i = 0;i < len;i++){
            if((i + 1 + count) == arr[i]) count++;
        }
        
        cout<<count<<endl;
    }
}