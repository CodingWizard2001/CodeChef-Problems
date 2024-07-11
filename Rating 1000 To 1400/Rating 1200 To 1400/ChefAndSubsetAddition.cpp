// Chef is asked to write a program that takes an array A of length N and two integers X,Y as input and modifies it as follows: Choose a random subset of elements of A (possibly empty) Increase all the elements of the chosen subset by X. Increase the remaining elements in A by Y. You are given N, X, Y, A and the array B that is returned by Chef's program. Determine whether Chef's program gave the correct output.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        for(int i = 0;i < n;i++) cin >> arr[i];
        
        int brr[n];
        for(int i = 0;i < n;i++) cin >> brr[i];
        
        bool flag = true;
        for(int i = 0;i < n;i++){
            if(abs(arr[i] - brr[i]) == x || abs(arr[i] - brr[i]) == y) continue;
            else{
                flag = false;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}