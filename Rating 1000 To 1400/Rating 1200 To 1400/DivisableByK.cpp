// You are given an array A consisting of N positive integers and a positive integer K. Find whether there exists a subset S of the elements of A such that the product of all elements of S is divisible by K.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,k;
        cin>>n>>k;
        
        int arr[n];
        for(int i = 0;i < n;i++) cin>>arr[i];
        
        bool flag = false;
        long long product = 1;
        for(int i = 0;i < n;i++){
            product = (product * arr[i]) % k;
            if(product == 0){
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}