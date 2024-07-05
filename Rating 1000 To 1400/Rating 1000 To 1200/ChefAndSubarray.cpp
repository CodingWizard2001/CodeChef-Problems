// Chef loves research! Now he is looking for subarray of maximal length with non-zero product. Chef has an array A with N elements: A1, A2, ..., AN. Subarray Aij of array A is elements from index i to index j: Ai, Ai+1, ..., Aj. Product of subarray Aij is product of all its elements (from ith to jth).



#include <bits/stdc++.h>
using namespace std;
int main() {
    int len;
    // cout<<"Enter the length : ";
    cin>>len;
    int arr[len];
    for(int i = 0;i<len;i++){
        // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }
    int count = 0,maxi = 0;
    for(int i = 0;i<len;i++){
        if(arr[i] != 0) count++;
        else count = 0;
        maxi = max(maxi,count);
    }
    cout<<maxi<<endl;
}