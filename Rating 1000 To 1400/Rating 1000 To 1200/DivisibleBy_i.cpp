// You are given an integer N. Construct a permutation P of length N such that For all i (1 ≤ i ≤ N - 1), i divides abs(Pi+1 - Pi). Recall that a permutation of length N is an array where every integer from 1 to N occurs exactly once. It can be proven that for the given constraints at least one such P always exists.



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
        
        int cnt = 1;
        for(int i = 0;i < len;i++){
            if(i % 2 == 0) arr[i] = cnt;
            else{
                arr[i] = (len - cnt) + 1;
                cnt++;
            }
        }
        
        for(int i = (len - 1);i >= 0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}