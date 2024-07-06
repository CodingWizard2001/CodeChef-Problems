// Chef has an array consisting of N + K - 1 integers. The array contains only the first N positive odd numbers. Each number appears exactly once, except for one number which appears exactly K times. The sum of integers in Chef's array is equal to S. Chef gives you three integers N, K and S and asks you to find the only element which appears K times in his array. It is guaranteed that for the given input, there exists a valid array consisting of N + K - 1 elements with a sum exactly equal to S.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long valueOfN,valueOfK,valueOfS;

        // cout<<"Enter the value of N : ";
        cin>>valueOfN;

        // cout<<"Enter the value of K : ";
        cin>>valueOfK;
        
        // cout<<"Enter the value of S : ";
        cin>>valueOfS;
        
        long long oddCount = (valueOfN * valueOfN);
        
        long long ans = (valueOfS - oddCount) / (valueOfK - 1);
        cout<<ans<<endl;
    }
}