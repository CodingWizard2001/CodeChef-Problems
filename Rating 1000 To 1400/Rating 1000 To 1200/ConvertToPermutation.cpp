// You are given an array A of size N. In one operation, you can: Choose an index i (1 ≤ i ≤ N) and increase Ai by 1. Find the minimum number of operations required to convert the array A into a permutation of size N. If it is impossible to do so, print -1.



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
        for(int i = 0;i < len;i++) cin>>arr[i];

        sort(arr,arr + len);
        int sum = 0,k = 0;
        for(int i = 0;i < len;i++){
            if(arr[i] > (i + 1)){
                k -= 1;
                break;
            }
            else sum = (sum + i + 1) - arr[i];
        }

        if(k == -1) cout<<-1<<endl;
        else cout<<sum<<endl;
    }
}