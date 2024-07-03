// Chef has N bags and an integer X. The ith bag contains Ai coins such that Ai ≤ X. In one operation, Chef can: Pick any bag and increase its coins to X. Formally, if he choses the ith bag, he can set Ai = X. Given that the cost of performing each operation is C (C ≤ X) coins and Chef can perform the above operation any (possibly zero) number of times, determine the maximum value of if Chef performs the operations optimally.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,maximumValue,spent;

        // cout<<"Enter the length of the array : ";
        cin>>len;

        // cout<<"Enter the maximum profit : ";
        cin>>maximumValue;

        // cout<<"Enter the amount needs to spent to get maximum profit : ";
        cin>>spent;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the profit at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int sum = 0,count = 0;
        for(int i = 0;i < len;i++){
            if(arr[i] < maximumValue && (maximumValue - arr[i]) > spent){
                arr[i] = maximumValue;
                count++;
            }
        }
        
        for(int i = 0;i < len;i++){
           sum += arr[i];
        }

        // cout<<"The maximum value of if Chef performs the operations optimally will be : ";
        cout<<(sum - (count * spent))<<endl;
    }
}