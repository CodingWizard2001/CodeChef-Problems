// Chef has an array A of size N and an integer M, such that 1 ≤ Ai ≤ M for every 1 ≤ i ≤ N. Chef wants an array B of size N, such that 1 ≤ Bi ≤ M and the value d(A,B) is as large as possible, i.e, the distance of B from A is maximum. Find the maximum distance for any valid array B.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,valueOfB;
        // cout<<"Enter the length of the array : ";
        cin>>len;
        // cout<<"Enter the value of B : ";
        cin>>valueOfB;
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        int maxi = 0;
        for(int i = 0;i < len;i++){
            maxi += max(abs(arr[i] - valueOfB),abs(arr[i] - 1));
        }
        cout<<maxi<<endl;
    }
}