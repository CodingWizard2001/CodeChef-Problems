// You are given an array A = [A1,A2,A3,......,An]. Is it possible  A into two non-empty subsequences S1 and S2 such that Sum(S1) x Sum(S2) is odd? Here, sum(S1) denotes the sum of elements in S1 and sum(S2) is defined similarly.

// 1.  S1 & S2 must be non-empty
// 2.  Every element of A must be in either S1 or S2
// 3.  S1 & S2 must be disjoint (in terms of which indices their subsequences represent)



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<" th position : ";
            cin>>arr[i];
        }
        
        int oddCount = 0;
        for(int i = 0;i < len;i++){
            if(arr[i] % 2 != 0) oddCount++;
        }
        if(oddCount % 2 != 0 || oddCount == 0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}