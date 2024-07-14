// Let f be a function, such that, for an array A of size M, You are given an array C of size N. In one operation on the array, you can: 

// 1.  Choose an index i (1 ≤ i ≤ |c|)

// 2.  Select two positive integers X and Y such that X + Y = Ci
// ​
// 3.  Remove the element Ci from the array C

// 4.  Insert the elements X and Y to the array C

// Find the maximum value of f(C) that can be obtained using any (possibly zero) number of given operations. Since this value can be huge, output the answer modulo 998244353.




#include <bits/stdc++.h>
using namespace std;
int mod = 998244353;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        long long sum = 0;
        for(int i = 0;i < n;i++){
            int arr;
            cin>>arr;
            sum += arr;
            sum %= mod;
        }
        
        long long result = (sum * (sum - 1)) % mod;
        if (result < 0) result += mod;
        cout << result << endl;
    }
}