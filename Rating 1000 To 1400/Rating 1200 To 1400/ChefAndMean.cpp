// Chef has invested his savings into N coins (numbered 1 through N). For each valid i, the i-th coin has value Ai. Chef does not want to know how much money he has, so he remembers the mean value of the coins instead of the sum of their values. A waiter from Chef's restaurant plans to steal exactly one of Chef's coins, but he does not want Chef to know about this, so he can only steal a coin if the arithmetic mean of all remaining coins is the same as the original arithmetic mean of all coins. Since the waiter is not good at mathematics, can you help him complete his plan? You have to determine whether it is possible to steal some coin and if it is possible, choose the coin the waiter should steal. If there are multiple coins that can be stolen, choose the one with the smallest number.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long n,sum = 0;
        cin>>n;

        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        
        int index,count = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] == (sum / n)){
                count = 1;
                index = i;
                break;
            }
        }
        
        if(sum % n != 0 || count != 1) cout<<"Impossible"<<endl;
        else cout<<(index + 1)<<endl;
    }
}