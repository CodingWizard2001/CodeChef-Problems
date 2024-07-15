// Chef is given an array A consisting of N positive integers. Chef shuffles the array A and creates a new array B of length N, where Bi = (Ai + i)mod2, for each i(1 ≤ i ≤ N). Find the maximum possible sum of integers of the array B, if Chef shuffles the array A optimally.



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
        int odd = 0,even;
        for(int i = 0;i < n;i++){
            cin>>arr[i];
            if(arr[i] % 2 != 0) odd++;
        }
        even = n - odd;
        
        int res;
        if(n % 2 == 0) res = min(even,(n / 2)) + min(odd,(n / 2));
        else res = min(even,(n / 2 + 1)) + min(odd,(n / 2));
        cout<<res<<endl;
    }
}