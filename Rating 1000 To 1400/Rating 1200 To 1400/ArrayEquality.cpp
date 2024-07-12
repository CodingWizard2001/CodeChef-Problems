// Chef has an array of N integers. Chef can rearrange this array in any manner. Chef doesn’t like the array if any two adjacent elements are equal. Determine whether there exists a rearrangement of the array that Chef likes.




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
        
        unordered_map<int, int> freq;
        int maxFreq = 0;
        
        int arr[len];
        for(int i = 0;i < len;i++){
            cin>>arr[i];
            freq[arr[i]]++;
            maxFreq = max(maxFreq,freq[arr[i]]);
        }
        
        if((2 * maxFreq) <= (len + 1)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}