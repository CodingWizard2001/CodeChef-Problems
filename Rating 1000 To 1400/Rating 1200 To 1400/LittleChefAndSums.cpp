// Our little chef is fond of doing additions/sums in his free time. Today, he has an array A consisting of N positive integers and he will compute prefix and suffix sums over this array. He first defines two functions prefixSum(i) and suffixSum(i) for the array as follows. The function prefixSum(i) denotes the sum of first i numbers of the array. Similarly, he defines suffixSum(i) as the sum of last N - i + 1 numbers of the array. Little Chef is interested in finding the minimum index i for which the value prefixSum(i) + suffixSum(i) is the minimum. In other words, first you should minimize the value of prefixSum(i) + suffixSum(i), and then find the least index i for which this value is attained. Since, he is very busy preparing the dishes for the guests, can you help him solve this problem?




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the no. of string : ";
        cin>>len;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        int mini = arr[0],idx = 0;
        for(int i = 1;i < len;i++){
            if(mini > arr[i]){
                mini = arr[i];
                idx = i;
            }
        }
        cout<<(idx + 1)<<endl;
    }
}