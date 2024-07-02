// Chef considers a permutation P of {1,2,3,…,N} End Sorted if and only if P1 = 1 and Pn = N. Chef is given a permutation P. In one operation Chef can choose any index i (1 ≤ i ≤ N − 1) and swap Pi and Pi+1. Determine the minimum number of operations required by Chef to make the permutation P End Sorted.


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
        vector<int> arr(len);
        for(int i = 0;i < len;i++) cin>>arr[i];
        int loc1 = find(arr.begin(), arr.end(), 1) - arr.begin(); 
        int locn = find(arr.begin(), arr.end(), len) - arr.begin(); 
        cout << len - 1 - locn + loc1 - (loc1 > locn) << endl;
    }
}