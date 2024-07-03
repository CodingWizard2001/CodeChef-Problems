// Chef has an array A of length N. In one operation, Chef can remove any one element from the array. Determine the minimum number of operations required to make all the elements same.


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
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the problem number: ";
            cin>>arr[i];
        }
        sort(arr,arr + len);
        int count = 1,maxi = 0;
        for(int i = 0;i < (len - 1);i++){
            if(arr[i] == arr[i + 1]) count++;
            else count = 1;
            maxi = max(maxi,count);
        }
        cout<<(len - maxi)<<endl;
    }
}